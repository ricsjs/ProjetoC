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
  int token;
};

int menuPrincipaladv(void);
Advogado* preencheAdvogado(void);
void exibeAdvogado(Advogado*);
void gravaAdvogado(Advogado*);
Advogado* buscaAdvogado(void);
void listaAdvogados(void);
void excluiAdvogado(Advogado*);
void exibeAdvogadoAposListagem(Advogado*);

int menu_advogado(void) {
  Advogado* fulano;
  int opcao;
  printf("Programa Cadastro de Advogados\n\n");
  opcao = menuPrincipaladv();
  while (opcao != 0) {
    switch (opcao) {
        case 1 :  fulano = preencheAdvogado();
            gravaAdvogado(fulano);
            free(fulano);
            break;

        case 2 :  fulano = buscaAdvogado();
            exibeAdvogado(fulano);
            free(fulano);
            break;
        
        case 3 :  listaAdvogados();
            break;

        //case 4: editarAdvogado();

        case 5: fulano = buscaAdvogado();
            excluiAdvogado(fulano);
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
    printf("2 - Pesquisar Advogado\n");
    printf("3 - Listar Advogados\n");
    printf("4 - Editar Advogado\n");
    printf("5 - Excluir Advogado\n");
    printf("0 - Encerrar Programa\n");
    scanf("%d", &op);
    return op;
}


Advogado* preencheAdvogado(void) {
  Advogado* adv;
  adv = (Advogado*) malloc(sizeof(Advogado));
  printf("Informe o nome do advogado: ");
  scanf(" %80[^\n]", adv->nome);

  printf("Informe um token para o advogado: ");
  scanf("%d", &adv->token);

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

void exibeAdvogado(Advogado* adv) {
  if ((adv == NULL) || (adv->status == 'i')) {
    printf("\n= = = Advogado Inexistente = = =\n");
  } else {
    printf("\n= = = Advogado Cadastrado = = =\n");
    printf("Nome do Advogado: %s\n", adv->nome);
    printf("E-mail: %s\n", adv->email);
    printf("CPF: %s\n", adv->cpf);
    printf("Celular: %s\n", adv->celular);
    printf("Situação do Advogado: %c\n", adv->status);
  }
}

Advogado* buscaAdvogado(void) {
  FILE* fp;
  Advogado* adv;
  int buscatoken;
  printf("\n = Busca Advogado = \n"); 
  printf("Informe o token: "); 
  scanf("%d", &buscatoken);
  adv = (Advogado*) malloc(sizeof(Advogado));
  fp = fopen("advogados.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(!feof(fp)) {
    fread(adv, sizeof(Advogado), 1, fp);
    if ((adv->token == buscatoken) && (adv->status != 'i')) {
      fclose(fp);
      return adv;
    }
  }
  fclose(fp);
  return NULL;
}

void exibeAdvogadoAposListagem(Advogado* adv) {
  if ((adv == NULL) || (adv->status == 'i')) {
    printf("\n= = = Advogado Inexistente = = =\n");
  } else {
    printf("Nome do Advogado: %s\n", adv->nome);
    printf("E-mail: %s\n", adv->email);
    printf("CPF: %s\n", adv->cpf);
    printf("Celular: %s\n", adv->celular);
    printf("Situação do Advogado: %c\n", adv->status);
  }
}

void listaAdvogados(void) {
  FILE* fp;
  Advogado* adv;
  printf("\n = Lista de Advogados = \n"); 
  adv = (Advogado*) malloc(sizeof(Advogado));
  fp = fopen("advogados.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(fread(adv, sizeof(Advogado), 1, fp)) {
    if (adv->status != 'i') {
      exibeAdvogadoAposListagem(adv);
    }else{
      printf("Não existem advogados cadastrados");
    }
  }
  fclose(fp);
  free(adv);
}

void excluiAdvogado(Advogado* advLido) {
  FILE* fp;
  Advogado* advArq;
  int achou = 0;
  if (advLido == NULL) {
    printf("Ops! O advogado informado não existe!\n");
  }
  else {
    advArq = (Advogado*) malloc(sizeof(Advogado));
    fp = fopen("advogados.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      exit(1);
    }
    while(!feof(fp)) {
      fread(advArq, sizeof(Advogado), 1, fp);
      if ((advArq->token == advLido->token) && (advArq->status != 'i')) {
        achou = 1;
        advArq->status = 'x';
        fseek(fp, -1*sizeof(Advogado), SEEK_CUR);
        fwrite(advArq, sizeof(Advogado), 1, fp);
        printf("\nAdvogado excluído com sucesso!\n");
      }
    }
    if (!achou) {
      printf("\nAdvogado não encontrado!\n");
    }
    fclose(fp);
    free(advArq);
  }
}


