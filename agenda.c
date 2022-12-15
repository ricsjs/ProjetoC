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
void preencheAgenda(void); 
int buscaInfoAgenda(void);
int gravaAgenda(Agenda* ag); 
int listaInfoEvento(void);
Agenda* buscaAgendaData(void);
void listaAgenda(void);
int infoExcluirAg(void);
void exibeEventoAposListagem(Agenda* ag);
void editarAgenda(void);
int exibirEventodata(void);
void exibedata(Agenda* ag);

int menu_agenda(void) {
  system("cls || clear");

  int opcao;
  printf("//////////////////////////////////////////////\n");
  printf("///      ===== AREA DOS EVENTOS =====      ///\n");
  printf("//////////////////////////////////////////////\n");
  opcao = menuPrincipalag();
  while (opcao != 0) {
    switch (opcao) {
        case 1 :preencheAgenda();
            break;

        case 2 : buscaInfoAgenda();
            break;

        case 3 :  listaInfoEvento();
            break;

         case 4: editarAgenda();
            break;

        case 5: infoExcluirAg();
            break;

        case 6 : exibirEventodata();
           break;
    }
    opcao = menuPrincipalag();
  }
  return 0;
}


int menuPrincipalag(){
  
    system("cls || clear");
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
    printf("///    6 - Buscar Evento por Data          ///\n");
    printf("///    0 - Volta                           ///\n");
    printf("///                                        ///\n");
    printf("//////////////////////////////////////////////\n");
    printf("Escolha uma opção: ");
    scanf("%d", &op);
    getchar();
    return op;
}


void preencheAgenda(void) {
  Agenda* ag;
  ag = (Agenda*) malloc(sizeof(Agenda));
  printf("Informe o nome do evento: ");
  scanf(" %80[^\n]", ag->nome);
  getchar();

  printf("Informe o nome do advogado: ");
  scanf(" %80[^\n]", ag->nome_adv);
  getchar();

  printf("Informe o nome do cliente: ");
  scanf(" %80[^\n]", ag->nome_cli);
  getchar();
  
    do{
        printf("Informe o CPF do advogado: ");
        scanf(" %15[^\n]", ag->cpf_adv);
        getchar();
    }while(!valida_cpf(ag->cpf_adv));

    do{
        printf("Informe o CPF do cliente: ");
        scanf(" %15[^\n]", ag->cpf_cli);
        getchar();
    }while(!valida_cpf(ag->cpf_cli));

  
    do{
        printf("Informe o celular do advogado: ");
        scanf(" %19[^\n]", ag->celular_adv);
        getchar();
    }while(!valida_cel(ag->celular_adv));

    do{
        printf("Informe o celular do cliente: ");
        scanf(" %19[^\n]", ag->celular_cli);
        getchar();
    }while(!valida_cel(ag->celular_cli));


    do {
        printf("Data do evento:\n");
        printf("Informe o dia: ");
        scanf("%d", &ag->dia);
        getchar();
        printf("Informe o mês: ");
        scanf("%d", &ag->mes);
        getchar();
        printf("Informe o ano: ");
        scanf("%d", &ag->ano);
        getchar();
    } while(!valida_data(ag->dia, ag->mes, ag->ano));

    ag->status = 'a';
    gravaAgenda(ag);
    free(ag);
    printf("Evento cadastrado com sucesso!\n");
    printf("Pressione qualquer tecla para sair... ");
    getchar();
    
}

int gravaAgenda(Agenda* ag) 
{
    FILE* fp;
    fp = fopen("eventos.dat", "ab");
    if (fp == NULL) {
        printf("Ops! Não é possível continuar o programa...\n");
        return 0;
    }
    
    fwrite(ag, sizeof(Agenda), 1, fp);
    fclose(fp);
    return 0;

}

void exibeAgenda(Agenda* ag) {
  system("cls || clear");
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


int buscaInfoAgenda(void)
{
    FILE* fp;
    Agenda* ag;
    int achou;
    char procurado[15]; 
    fp = fopen("eventos.dat", "rb");

    if (fp == NULL) {
        printf("Ops! Erro na abertura do arquivo!\n");
        return 0;
    }   
    printf("\n\n");
    system(" cls || clear ");
    printf(" | ========================================================= | \n");
    printf(" | --------------------------------------------------------- | \n");
    printf(" |                   Buscar evento da Agenda                 | \n");
    printf(" | ========================================================= | \n");
    printf("Informe o nome do evento: ");
    scanf(" %30[^\n]", procurado);
    getchar();   
    ag = (Agenda*) malloc(sizeof(Agenda));  
    achou = 0;  
     while((!achou) && (fread(ag, sizeof(Agenda), 1, fp))) {
        if ((strcmp(ag->nome, procurado) == 0) && (ag->status == 'a')) {
            achou = 1;
        }
    }
    if (achou) {
        system(" cls || clear" );
        exibeEventoAposListagem(ag);
    
    } else {
        printf("Os dados do usuário %s não foram encontrados\n", procurado);
    }
    free(ag);
    fclose(fp); 
    printf(" | Pressione qualquer tecla para sair.... ");
    getchar();
    return 0; 
}

int listaInfoEvento(void) 
{
    FILE* fp;
    Agenda* ag;
    
    fp = fopen("eventos.dat", "rb");
    
    if (fp == NULL) {
        printf("Ops! Erro na abertura do arquivo!\n");
        return 0;
    }
    ag = (Agenda*)malloc(sizeof(Agenda)); 
    while(fread(ag, sizeof(Agenda), 1, fp)) {
        system(" cls || clear");
        printf(" | ==================== Lista Eventos ====================== | \n");
        printf(" |                                                           | \n");
        exibeEventoAposListagem(ag);
        printf("Pressione qualquer tecla para sair...");
        getchar();
    } 
    fclose(fp);
    free(ag);
    return 0;

}

void exibeEventoAposListagem(Agenda* ag) {
  system("cls || clear");
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
  system("cls || clear");
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

int infoExcluirAg(void)
{
    FILE* fp;
    Agenda* ag;
    int achou;
    char resp;
    char procurado[20];
    
    fp = fopen("eventos.dat", "r+b");

    if (fp == NULL){
        printf("Ops! Erro na abertura do arquivo!\n");
        return 0;
    }
    ag = (Agenda*) malloc(sizeof(ag));
    system( " clear || cls ");
    printf(" | ============================================================== | \n");
    printf(" | -------------------------------------------------------------- | \n");
    printf(" | ---------------------- Excluir Evento  ----------------------- | \n");
    printf(" |                                                                | \n");
    printf(" | Informe o nome do evento que você quer excluir: ");
    scanf(" %30[^\n]", procurado);
    getchar();  
    achou = 0;
    
    while ((!achou) && (fread(ag, sizeof(Agenda), 1, fp))){
        if ((strcmp(ag->nome, procurado) == 0) && (ag->status == 'a')){
            achou = 1;
        }
    }
   if (achou){
        exibeAgenda(ag);
        printf("Deseja realmente excluir os dados deste usuário? (s/n) \n");
        scanf("%c", &resp);
        
        if (resp == 's' || resp == 'S'){
            ag->status = 'i';
            fseek(fp, (-1)*sizeof(Agenda), SEEK_CUR);
            fwrite(ag, sizeof(ag), 1, fp);
            printf("\nUsuário excluído com sucesso!\n");
            gravaAgenda(ag);
            getchar();   
        }else{
        
            printf("\nTudo bem, os dados não foram alterados!");
        
        }
    }else{
    
        printf("O usuário não foi encontrado!");
    
    }  
    free(ag);
    fclose(fp);   
    printf(" | Pressione qualquer tecla para sair.... ");
    getchar();  
    return 0;
    
}


void editarAgenda(void) {
  system("cls || clear");
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
  getchar();

  printf("Informe o nome do advogado: ");
  scanf(" %80[^\n]", ag->nome_adv);
  getchar();

  printf("Informe o nome do advogado: ");
  scanf(" %80[^\n]", ag->nome_cli);
  getchar();
  
    do{
        printf("Informe o CPF do advogado: ");
        scanf(" %15[^\n]", ag->cpf_adv);
        getchar();
    }while(!valida_cpf(ag->cpf_adv));

    do{
        printf("Informe o CPF do cliente: ");
        scanf(" %15[^\n]", ag->cpf_cli);
        getchar();
    }while(!valida_cpf(ag->cpf_cli));

  
    do{
        printf("Informe o celular do advogado: ");
        scanf(" %19[^\n]", ag->celular_adv);
        getchar();
    }while(!valida_cel(ag->celular_adv));

    do{
        printf("Informe o celular do cliente: ");
        scanf(" %19[^\n]", ag->celular_cli);
        getchar();
    }while(!valida_cel(ag->celular_cli));


    do {
        printf("Data do evento:\n");
        printf("Informe o dia: ");
        scanf("%d", &ag->dia);
        getchar();
        printf("Informe o mês: ");
        scanf("%d", &ag->mes);
        getchar();
        printf("Informe o ano: ");
        scanf("%d", &ag->ano);
        getchar();
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



int exibirEventodata(void)
{
    FILE* fp;
    Agenda* ag;

    
    fp = fopen("eventos.dat", "rb");

    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro ao abrir o arquivo!\n");
        return 0;
    }
    
    system ( " clear||cls " );
    printf(" | ==================================================================== | \n");
    printf(" | -------------------------------------------------------------------- | \n");
    printf(" | ------------------| Relatório de eventos por dada |----------------- | \n");
    printf(" |                                                                      | \n");
    ag = (Agenda*) malloc(sizeof(Agenda));
  

    while (fread(ag, sizeof(Agenda), 1, fp)){ 
      exibedata(ag);
  }
    
    free(ag);
    fclose(fp);
    getchar();

    return 0;

} 


void exibedata(Agenda* ag)
{
  printf("Nome do evento: %s\n", ag->nome);
  printf("Data de devolução: %d/%d/%d\n", ag->dia, ag->mes, ag->ano);
  printf("\n");
  printf("Pressione qualquer tecla para sair..");
  getchar();

}
