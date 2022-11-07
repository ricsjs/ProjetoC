#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacoes.h"

typedef struct cliente Cliente;

struct cliente {
  char nome[81];
  char email[50];
  char cpf[15];
  char celular[19];
  char status;
  int dia, mes, ano;
};

int menuPrincipalcli(void);
Cliente* preencheCliente(void);
void exibeCliente(Cliente*);
void gravaCliente(Cliente*);
Cliente* buscaCliente(void);
void listaClientes(void);
void excluiCliente(Cliente*);


int menu_cliente(void) {
  Cliente* fulano;
  int opcao;
  printf("ÁREA DO CLIENTE\n\n");
  opcao = menuPrincipalcli();
  while (opcao != 0) {
    switch (opcao) {
        case 1 :  fulano = preencheCliente();
            gravaCliente(fulano);
            free(fulano);
            break;
    }
    opcao = menuPrincipalcli();
  }
  return 0;
}


int menuPrincipalcli(){
    int op;
    printf("\nMenu Principal\n");
    printf("1 - Cadastrar Cliente\n");
    printf("0 - Encerrar Programa\n");
    scanf("%d", &op);
    return op;
}


Cliente* preencheCliente(void) {
  Cliente* cli;
  cli = (Cliente*) malloc(sizeof(Cliente));
  printf("Informe o nome do cliente: ");
  scanf(" %80[^\n]", cli->nome);

    do {
        printf("Informe o e-mail do cliente: ");
        scanf(" %50[^\n]", cli->email);

    } while (!lerEmail(cli->email));

  
    do{
        printf("Informe o CPF do cliente: ");
        scanf(" %15[^\n]", cli->cpf);
    }while(!valida_cpf(cli->cpf));

  
    do{
        printf("Informe o celular do cliente: ");
        scanf(" %19[^\n]", cli->celular);
    }while(!valida_cel(cli->celular));


    do {
        printf("Data de nascimento:");
        printf("Informe o dia: ");
        scanf("%d", &cli->dia);
        printf("Informe o mês: ");
        scanf("%d", &cli->mes);
        printf("Informe o an: ");
        scanf("%d", &cli->ano);
    } while(!valida_data(cli->dia, cli->mes, cli->ano));

    cli->status = 'a';
    return cli;
}

void gravaCliente(Cliente* cli) {
  FILE* fp;
  fp = fopen("clientes.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(cli, sizeof(Cliente), 1, fp);
  fclose(fp);
}

