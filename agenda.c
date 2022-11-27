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
void exibeEventoAposListagem(Agenda*);
void editarAgenda(void);

int menu_agenda(void) {
  Agenda* evento;
  int opcao;
  printf("//////////////////////////////////////////////\n");
  printf("///      ===== AREA DOS EVENTOS =====      ///\n");
  printf("//////////////////////////////////////////////\n");
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

        case 3 :  listaAgenda();
            break;

         case 4: editarAgenda();
            break;

        case 5: evento = buscaAgenda();
            excluiAgenda(evento);
            free(evento);
            break;
    }
    opcao = menuPrincipalag();
  }
  return 0;
}


int menuPrincipalag(){
    
    int op;
    printf("\n//////////////////////////////////////////////\n");
    printf("///           ===== MENU =====             ///\n");
    printf("//////////////////////////////////////////////\n");
    printf("///                                        ///\n");
    printf("///    1 - Cadastrar Evento                ///\n");
    printf("///    2 - Pesquisar Evento                ///\n");
    printf("///    3 - Listar Evento                   ///\n");
    printf("///    4 - Editar Evento                   ///\n");
    printf("///    5 - Excluir Evento                  ///\n");
    printf("///    0 - Volta                           ///\n");
    printf("///                                        ///\n");
    printf("//////////////////////////////////////////////\n");
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

  printf("Informe o nome do advogado: ");
  scanf(" %80[^\n]", ag->nome_adv);

  printf("Informe o nome do advogado: ");
  scanf(" %80[^\n]", ag->nome_cli);
  
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

void exibeEventoAposListagem(Agenda* ag) {
  if ((ag == NULL) || (ag->status == 'i')) {
    printf("\n= = = Evento Inexistente = = =\n");
  } else {
    printf("\n= = = Evento = = =\n");
    printf("Nome do evento: %s\n", ag->nome);
    printf("Nome do Advogado: %s\n", ag->nome_adv);
    printf("Nome do Cliente: %s\n", ag->nome_cli);
    printf("CPF do Advogado: %s\n", ag->cpf_adv);
    printf("CPF do Cliente: %s\n", ag->cpf_cli);
    printf("Data do evento: %d/%d/%d\n", ag->dia, ag->mes, ag->ano);
    printf("\n\n");
  }
}

void listaAgenda(void) {
  FILE* fp;
  Agenda* ag;
  printf("\n = Lista de Eventos = \n"); 
  ag = (Agenda*) malloc(sizeof(Agenda));
  fp = fopen("eventos.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(fread(ag, sizeof(Agenda), 1, fp)) {
    if (ag->status != 'i') {
      exibeEventoAposListagem(ag);
    }else{
      printf("Não existem advogados cadastrados");
    }
  }
  fclose(fp);
  free(ag);
}

void excluiAgenda(Agenda* agLido) {
  FILE* fp;
  Agenda* agArq;
  int achou = 0;
  if (agLido == NULL) {
    printf("Ops! O evento informado não existe!\n");
  }
  else {
    agArq = (Agenda*) malloc(sizeof(Agenda));
    fp = fopen("eventos.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      exit(1);
    }
    while(!feof(fp)) {
      fread(agArq, sizeof(Agenda), 1, fp);
      if ((agArq->token == agLido->token) && (agArq->status != 'i')) {
        achou = 1;
        agArq->status = 'x';
        fseek(fp, -1*sizeof(Agenda), SEEK_CUR);
        fwrite(agArq, sizeof(Agenda), 1, fp);
        printf("\nEvento excluído com sucesso!\n");
        break;
      }
    }
    if (!achou) {
      printf("\nEvento não encontrado!\n");
    }
    fclose(fp);
    free(agArq);
  }
}


void editarCliente(void) {
  FILE* fp;
  Agenda* ag;
  int achou;
  char resp;
  char procurado[15];
  fp = fopen("eventos.dat", "r+b");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  printf("\n\n");
  printf("= = Editar Agenda = = \n");
  printf("Informe o nome do evento a ser alterado: ");
  scanf(" %14[^\n]", procurado);
  ag = (Agenda*) malloc(sizeof(Agenda));
  achou = 0;
  while((!achou) && (fread(ag, sizeof(Agenda), 1, fp))) {
   if ((strcmp(ag->nome, procurado) == 0) && (ag->status == 'a')) {
     achou = 1;
   }
  }
  if (achou) {
    exibeAgenda(ag);
    getchar();
    printf("Deseja realmente editar este evento (s/n)? ");
    scanf("%c", &resp);
    if (resp == 's' || resp == 'S') {

      printf("Informe o nome do evento: ");
  scanf(" %80[^\n]", ag->nome);

  printf("Informe um token para o evento: ");
  scanf("%d", &ag->token);

  printf("Informe o nome do advogado: ");
  scanf(" %80[^\n]", ag->nome_adv);

  printf("Informe o nome do advogado: ");
  scanf(" %80[^\n]", ag->nome_cli);
  
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

      fseek(fp, (-1)*sizeof(Agenda), SEEK_CUR);
      fwrite(ag, sizeof(Agenda), 1, fp);
      printf("\n Evento editado com sucesso!!\n");
    } else {
      printf("\nOk, os dados não foram alterados\n");
    }
  } else {
    printf("O evento %s não foi encontrado...\n", procurado);
  }
  free(ag);
  fclose(fp);
}


