#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacoes.h"

typedef struct advogado Advogado;

struct advogado {
  char nome[81];
  char email[50];
  char cpf[15];
  char celular[19];
  char status;
  int dia, mes, ano;
};

int menuPrincipaladv(void);
Advogado* preencheAdvogado(void);
void exibeAdvogado(Advogado*);
void gravaAdvogado(Advogado*);
Advogado* buscaAdvogado(void);
void listaAdvogados(void);
void excluiAdvogado(Advogado*);


int menu_advogado(void) {
  Advogado* fulano;
  int opcao;
  printf("ÁREA DO ADVOGADO\n\n");
  opcao = menuPrincipaladv();
  while (opcao != 0) {
    switch (opcao) {
        case 1 :  fulano = preencheAdvogado();
            gravaAdvogado(fulano);
            free(fulano);
            break;
    }
    opcao = menuPrincipaladv();
  }
  return 0;
}


int menuPrincipaladv(){
    int op;
    printf("\nMenu Principal\n");
    printf("1 - Cadastrar Advogado\n");
    printf("0 - Encerrar Programa\n");
    scanf("%d", &op);
    return op;
}


Advogado* preencheAdvogado(void) {
  Advogado* adv;
  adv = (Advogado*) malloc(sizeof(Advogado));
  printf("Informe o nome do advogado: ");
  scanf(" %80[^\n]", adv->nome);

    do {
        printf("Informe o e-mail do advogado: ");
        scanf(" %50[^\n]", adv->email);

    } while (!lerEmail(adv->email));

  
    do{
        printf("Informe o CPF do advogado: ");
        scanf(" %15[^\n]", adv->cpf);
    }while(!valida_cpf(adv->cpf));

  
    do{
        printf("Informe o celular do advogado: ");
        scanf(" %19[^\n]", adv->celular);
    }while(!valida_cel(adv->celular));


    do {
        printf("Data de nascimento:\n");
        printf("Informe o dia: ");
        scanf("%d", &adv->dia);
        printf("Informe o mês: ");
        scanf("%d", &adv->mes);
        printf("Informe o an: ");
        scanf("%d", &adv->ano);
    } while(!valida_data(adv->dia, adv->mes, adv->ano));

    adv->status = 'a';
    return adv;
}

void gravaAdvogado(Advogado* adv) {
  FILE* fp;
  fp = fopen("advogados.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(adv, sizeof(Advogado), 1, fp);
  fclose(fp);
}

