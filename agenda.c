#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacoes.h"

typedef struct agenda Agenda;

struct agenda {
  char nome[81];
  char nome_cli[81];
  char nome_adv[81];
  char cpf_cli[15];
  char cpf_adv[15];
  char celular_cli[19];
  char celular_adv[19];
  char status;
  int dia, mes, ano;
  int token;
};

int menuPrincipalag(void);
Agenda* preencheAgenda(void);
void exibeAgenda(Agenda*);
void gravaAgenda(Agenda*);
Agenda* buscaAgenda(void);
void listaAgenda(void);
void excluiAgenda(Agenda*);

int menu_agenda(void) {
  Agenda* evento;
  int opcao;
  printf("Programa Cadastro de Eventos\n\n");
  opcao = menuPrincipalag();
  while (opcao != 0) {
    switch (opcao) {
        case 1 :  evento = preencheAgenda();
            gravaAgenda(evento);
            free(evento);
            break;

        case 2 :  evento = buscaAgenda();
            exibeAgenda(evento);
            free(evento);
            break;
    }
    opcao = menuPrincipalag();
  }
  return 0;
}


int menuPrincipalag(){
    int op;
    printf("\nMenu Principal\n");
    printf("1 - Cadastrar Evento\n");
    printf("2 - Pesquisar Evento\n");
    printf("3 - Editar Evento\n");
    printf("4 - Excluir Evento\n");
    printf("0 - Encerrar Programa\n");
    scanf("%d", &op);
    return op;
}


Agenda* preencheAgenda(void) {
  Agenda* ag;
  ag = (Agenda*) malloc(sizeof(Agenda));
  printf("Informe o nome do evento: ");
  scanf(" %80[^\n]", ag->nome);

  printf("Informe um token para o evento: ");
  scanf("%d", &ag->token);

  
    do{
        printf("Informe o CPF do advogado: ");
        scanf(" %15[^\n]", ag->cpf_adv);
    }while(!valida_cpf(ag->cpf_adv));

    do{
        printf("Informe o CPF do cliente: ");
        scanf(" %15[^\n]", ag->cpf_cli);
    }while(!valida_cpf(ag->cpf_cli));

  
    do{
        printf("Informe o celular do advogado: ");
        scanf(" %19[^\n]", ag->celular_adv);
    }while(!valida_cel(ag->celular_adv));

    do{
        printf("Informe o celular do cliente: ");
        scanf(" %19[^\n]", ag->celular_cli);
    }while(!valida_cel(ag->celular_cli));


    do {
        printf("Data do evento:\n");
        printf("Informe o dia: ");
        scanf("%d", &ag->dia);
        printf("Informe o mês: ");
        scanf("%d", &ag->mes);
        printf("Informe o ano: ");
        scanf("%d", &ag->ano);
    } while(!valida_data(ag->dia, ag->mes, ag->ano));

    ag->status = 'a';
    return ag;
}

void gravaAgenda(Agenda* ag) {
  FILE* fp;
  fp = fopen("eventos.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(ag, sizeof(Agenda), 1, fp);
  fclose(fp);
}

void exibeAgenda(Agenda* ag) {
  if ((ag == NULL) || (ag->status == 'i')) {
    printf("\n= = = Evento Inexistente = = =\n");
  } else {
    printf("\n= = = Evento Cadastrado = = =\n");
    printf("Nome do evento: %s\n", ag->nome);
    printf("Nome do Advogado: %s\n", ag->nome_adv);
    printf("Nome do Cliente: %s\n", ag->nome_cli);
    printf("CPF do Advogado: %s\n", ag->cpf_adv);
    printf("CPF do Cliente: %s\n", ag->cpf_cli);
    printf("Data do evento: %d/%d/%d\n", ag->dia, ag->mes, ag->ano);
  }
}

Agenda* buscaAgenda(void) {
  FILE* fp;
  Agenda* ag;
  int buscatoken;
  printf("\n = Busca Evento = \n"); 
  printf("Informe o token: "); 
  scanf("%d", &buscatoken);
  ag = (Agenda*) malloc(sizeof(Agenda));
  fp = fopen("eventos.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(!feof(fp)) {
    fread(ag, sizeof(Agenda), 1, fp);
    if ((ag->token == buscatoken) && (ag->status != 'i')) {
      fclose(fp);
      return ag;
    }
  }
  fclose(fp);
  return NULL;
}

