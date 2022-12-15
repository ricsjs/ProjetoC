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
void preencheAdvogado(void);
void exibeAdvogado(Advogado*);
int gravaAdvogado(Advogado* adv); 
void listaAdvogados(void);
void exibeAdvogadoAposListagem(Advogado*);
void editarAdvogado(void);
int buscaInfoAdv(void);
int infoExcluirAdv(void);
int validaAdv(char* cpf);

int listaInfoAdv(void); 
int menu_advogado(void) 


{
  system("cls || clear");

  int opcao;
  printf("//////////////////////////////////////////////\n");
  printf("///     ===== AREA DOS ADVOGADOS =====     ///\n");
  printf("//////////////////////////////////////////////\n");
  opcao = menuPrincipaladv();
  while (opcao != 0) {
    switch (opcao) {
        case 1 : preencheAdvogado();
        
            break;

        case 2 :buscaInfoAdv();
        
            break;
        
        case 3 :  listaInfoAdv();
            break;

        case 4: editarAdvogado();
            break;

        case 5: infoExcluirAdv();
         
          break;
    }
    opcao = menuPrincipaladv();
  }
  return 0;
}


int menuPrincipaladv(){
    system("cls || clear");
    int op;
    printf("\n//////////////////////////////////////////////\n");
    printf("///           ===== MENU =====             ///\n");
    printf("//////////////////////////////////////////////\n");
    printf("///                                        ///\n");
    printf("///    1 - Cadastrar Advogado              ///\n");
    printf("///    2 - Pesquisar Advogado              ///\n");
    printf("///    3 - Listar Advogados                ///\n");
    printf("///    4 - Editar Advogado                 ///\n");
    printf("///    5 - Excluir Advogado                ///\n");
    printf("///    0 - Voltar                          ///\n");
    printf("///                                        ///\n");
    printf("//////////////////////////////////////////////\n");
    printf("Escolha uma opção: ");
    scanf("%d", &op);
    getchar();
    return op;
}


void preencheAdvogado(void) {
  system("cls || clear");
  Advogado* adv;
  adv = (Advogado*) malloc(sizeof(Advogado));
  printf("Informe o nome do advogado: ");
  scanf(" %80[^\n]", adv->nome);
  getchar();


    do {
        printf("Informe o e-mail do advogado: ");
        scanf(" %50[^\n]", adv->email);
        getchar();

    } while (!lerEmail(adv->email));

  
    do{
        printf("Informe o CPF do advogado: ");
        scanf(" %15[^\n]", adv->cpf);
        getchar();
     }while(!((valida_cpf(adv->cpf)) && (validaAdv(adv->cpf))));

  
    do{
        printf("Informe o celular junto com o DDD do advogado(apenas numeros): ");
        scanf(" %19[^\n]", adv->celular);
        getchar();
    }while(!valida_cel(adv->celular));


    do {
        printf("Data de nascimento:\n");
        printf("Informe o dia: ");
        scanf("%d", &adv->dia);
        getchar();
        printf("Informe o mês: ");
        scanf("%d", &adv->mes);
        getchar();
        printf("Informe o ano: ");
        scanf("%d", &adv->ano);
        getchar();
    } while(!valida_data(adv->dia, adv->mes, adv->ano));

    adv->status = 'a';
    gravaAdvogado(adv);
    free(adv);
    printf("CLiente cadastrado com sucesso!\n");
    printf("Pressione qualquer tecla para sair... ");
    getchar();

}


int gravaAdvogado(Advogado* adv) 
{
    FILE* fp;
    fp = fopen("advogados.dat", "ab");
    if (fp == NULL) {
        printf("Ops! Não é possível continuar o programa...\n");
        return 0;
    }
    
    fwrite(adv, sizeof(adv), 1, fp);
    fclose(fp);
    return 0;

}

void exibeAdvogado(Advogado* adv) {
  system("cls || clear");
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

int buscaInfoAdv(void)
{
    FILE* fp;
    Advogado* adv;
    int achou;
    char procurado[15]; 
    fp = fopen("advogados.dat", "rb");

    if (fp == NULL) {
        printf("Ops! Erro na abertura do arquivo!\n");
        return 0;
    }   
    printf("\n\n");
    system(" cls || clear ");
    printf(" | ========================================================= | \n");
    printf(" | --------------------------------------------------------- | \n");
    printf(" |                   Buscar dados do Advogado                | \n");
    printf(" | ========================================================= | \n");
    printf("Informe o seu cpf: ");
    scanf(" %30[^\n]", procurado);
    getchar();   
    adv = (Advogado*) malloc(sizeof(Advogado));  
    achou = 0;  
    while((!achou) && (fread(adv, sizeof(Advogado), 1, fp))) {
        if ((strcmp(adv->cpf, procurado) == 0) && (adv->status == 'a')) {
            achou = 1;
        }
    }
    if (achou) {
        system(" cls || clear" );
        exibeAdvogadoAposListagem(adv);
    
    } else {
        printf("Os dados do usuário %s não foram encontrados\n", procurado);
    }
    free(adv);
    fclose(fp); 
    printf(" | Pressione qualquer tecla para sair.... ");
    getchar();
    return 0; 
}

void exibeAdvogadoAposListagem(Advogado* adv) {
  system("cls || clear");
  if ((adv == NULL) || (adv->status == 'i')) {
    printf("\n= = = Advogado Inexistente = = =\n");
  } else {
    printf("Nome do Advogado: %s\n", adv->nome);
    printf("E-mail: %s\n", adv->email);
    printf("CPF: %s\n", adv->cpf);
    printf("Celular: %s\n", adv->celular);
    printf("Situação do Advogado: %c\n", adv->status);
    printf("\n\n");
  }
}

int listaInfoAdv(void) 
{
    FILE* fp;
    Advogado* adv;
    
    fp = fopen("advogados.dat", "rb");
    
    if (fp == NULL) {
        printf("Ops! Erro na abertura do arquivo!\n");
        return 0;
    }
    adv = (Advogado*)malloc(sizeof(Advogado)); 
    while(fread(adv, sizeof(Advogado), 1, fp)) {
        system(" cls || clear");
        printf(" | ==================== Lista Usuário ====================== | \n");
        printf(" |                                                           | \n");
        exibeAdvogadoAposListagem(adv);
        printf("Pressione qualquer tecla para sair... ");
        getchar();

    } 
    fclose(fp);
    free(adv);
    return 0;

}

int infoExcluirAdv(void)
{
    FILE* fp;
    Advogado* adv;
    int achou;
    char resp;
    char procurado[20];
    
    fp = fopen("clientes.dat", "r+b");

    if (fp == NULL){
        printf("Ops! Erro na abertura do arquivo!\n");
        return 0;
    }
    adv = (Advogado*) malloc(sizeof(adv));
    system( " clear || cls ");
    printf(" | ============================================================== | \n");
    printf(" | -------------------------------------------------------------- | \n");
    printf(" | ---------------------- Excluir Advogado ---------------------- | \n");
    printf(" |                                                                | \n");
    printf(" | Informe o CPF do advogado que você quer excluir: ");
    scanf(" %30[^\n]", procurado);
    getchar();  
    achou = 0;
    
    while ((!achou) && (fread(adv, sizeof(Advogado), 1, fp))){
        if ((strcmp(adv->cpf, procurado) == 0) && (adv->status == 'a')){
            achou = 1;
        }
    }
   if (achou){
        exibeAdvogado(adv);
        printf("Deseja realmente excluir os dados deste usuário? (s/n) \n");
        scanf("%c", &resp);
        getchar();
        
        if (resp == 's' || resp == 'S'){
            adv->status = 'i';
            fseek(fp, (-1)*sizeof(adv), SEEK_CUR);
            fwrite(adv, sizeof(Advogado), 1, fp);
            printf("\nUsuário excluído com sucesso!\n");
            gravaAdvogado(adv);
            getchar();   
        }else{
        
            printf("\nTudo bem, os dados não foram alterados!");
        
        }
    }else{
    
        printf("O usuário não foi encontrado!");
    
    }  
    free(adv);
    fclose(fp);   
    printf(" | Pressione qualquer tecla para sair.... ");
    getchar();  
    return 0;
    
}

void editarAdvogado(void) {
  system("cls || clear");
  FILE* fp;
  Advogado* adv;
  int achou;
  char resp;
  char procurado[15];
  fp = fopen("advogados.dat", "r+b");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  printf("\n\n");
  printf("= = Editar Advogado = = \n");
  printf("Informe o CPF do advogado: ");
  scanf(" %20[^\n]", procurado);
  getchar();
  adv = (Advogado*) malloc(sizeof(Advogado));
  achou = 0;
  while((!achou) && (fread(adv, sizeof(Advogado), 1, fp))) {
   if ((strcmp(adv->cpf, procurado) == 0) && (adv->status == 'a')) {
     achou = 1;
   }
  }
  if (achou) {
    exibeAdvogado(adv);
    getchar();
    printf("Deseja realmente editar este advogado (s/n)? ");
    scanf("%c", &resp);
    getchar();
    if (resp == 's' || resp == 'S') {

      printf("Informe o nome do advogado: ");
      scanf(" %80[^\n]", adv->nome);
      getchar();

      do {
        printf("Informe o e-mail do advogado: ");
        scanf(" %50[^\n]", adv->email);
        getchar();

      } while (!lerEmail(adv->email));

    
      do{
          printf("Informe o celular junto com o DDD do advogado(apenas numeros): ");
          scanf(" %19[^\n]", adv->celular);
          getchar();
      }while(!valida_cel(adv->celular));


      do {
          printf("Data de nascimento:\n");
          printf("Informe o dia: ");
          scanf("%d", &adv->dia);
          getchar();
          printf("Informe o mês: ");
          scanf("%d", &adv->mes);
          getchar();
          printf("Informe o an: ");
          scanf("%d", &adv->ano);
          getchar();
      } while(!valida_data(adv->dia, adv->mes, adv->ano));

      adv->status = 'a';

      fseek(fp, (-1)*sizeof(Advogado), SEEK_CUR);
      fwrite(adv, sizeof(Advogado), 1, fp);
      printf("\n Adovado editado com sucesso!!\n");
    } else {
      printf("\nOk, os dados não foram alterados\n");
    }
  } else {
    printf("O advogado %s não foi encontrado...\n", procurado);
  }
  free(adv);
  fclose(fp);
}


int validaAdv(char* cpf)
{
    FILE *fp;
    Advogado *usuarioAdv;

    usuarioAdv = (Advogado*)malloc(sizeof(usuarioAdv));
    
    fp = fopen("advogados.dat", "rt");
    
    if (fp == NULL)
    {

        fclose(fp);
        return 1;
    } 

    while (!feof(fp))
    {
        fread(usuarioAdv, sizeof(Advogado), 1, fp);
        if (strcmp(cpf, usuarioAdv->cpf) == 0 && (usuarioAdv->status != 'i'))
        {
            fclose(fp);
            return 0;
        }
    }
    fclose(fp);
    return 1;

}
