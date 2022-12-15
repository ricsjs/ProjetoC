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
  int token;
};

int menuPrincipalcli(void);
void preencheCliente(void);
void exibeCliente(Cliente*);
int gravaCliente(Cliente* cliente); 
int buscaInfoUsuario(void);
void listaClientes(void);
void exibeClienteAposListagem(Cliente*);
void editarCliente(void);
int buscaInfoUsuario(void);
int listaInfoUsuario(void);
int infoExcluir(void);
int validaUser(char* user);


int menu_cliente(void) {
  system("cls || clear");

  int opcao;
  printf("//////////////////////////////////////////////\n");
  printf("///     ===== AREA DOS CLIENTES =====      ///\n");
  printf("//////////////////////////////////////////////\n");
  opcao = menuPrincipalcli();
  while (opcao != 0) {
    switch (opcao) {
        case 1 :preencheCliente();
            break;

        case 2 : buscaInfoUsuario();
          
            break;

        case 3: listaInfoUsuario();
            break;

        case 4: editarCliente();
            break;

        case 5: infoExcluir(); 
           break;
    }
    opcao = menuPrincipalcli();
  }
  return 0;
}


int menuPrincipalcli(){
    system("cls || clear");
    int op;
    printf("\n//////////////////////////////////////////////\n");
    printf("///           ===== MENU =====             ///\n");
    printf("//////////////////////////////////////////////\n");
    printf("///                                        ///\n");
    printf("///    1 - Cadastrar Cliente               ///\n");
    printf("///    2 - Pesquisar Cliente               ///\n");
    printf("///    3 - Listar Cliente                  ///\n");
    printf("///    4 - Editar Cliente                  ///\n");
    printf("///    5 - Excluir Cliente                 ///\n");
    printf("///    0 - Volta                           ///\n");
    printf("///                                        ///\n");
    printf("//////////////////////////////////////////////\n");
    printf("Escolha uma opção: ");
    scanf("%d", &op);
    getchar();
    return op;
}


void preencheCliente(void) {
  system("cls || clear");
  Cliente* clientes;
  clientes = (Cliente*) malloc(sizeof(Cliente));
  printf("Informe o nome do cliente: ");
  scanf(" %80[^\n]", clientes->nome);
  getchar();

    do {
        printf("Informe o e-mail do cliente: ");
        scanf(" %50[^\n]", clientes->email);
        getchar();

    } while (!lerEmail(clientes->email));

  
    do{
        printf("Informe o CPF do cliente: ");
        scanf(" %20[^\n]", clientes->cpf);
        getchar();
      }while(!((valida_cpf(clientes->cpf)) && (validaUser(clientes->cpf))));
  
    do{
        printf("Informe o celular do cliente: ");
        scanf(" %19[^\n]", clientes->celular);
        getchar();
    }while(!valida_cel(clientes->celular));


    do {
        printf("Data de nascimento:\n");
        printf("Informe o dia: ");
        scanf("%d", &clientes->dia);
        getchar();
        printf("Informe o mês: ");
        scanf("%d", &clientes->mes);
        getchar();
        printf("Informe o an: ");
        scanf("%d", &clientes->ano);
        getchar();
    } while(!valida_data(clientes->dia, clientes->mes, clientes->ano));
    clientes->status = 'a';
    gravaCliente(clientes);
    free(clientes);
    printf("CLiente cadastrado com sucesso!\n");
    printf("Pressione qualquer tecla para sair... ");
    getchar();
    
   

}

int gravaCliente(Cliente* cliente) 
{
    FILE* fp;
    fp = fopen("clientes.dat", "ab");
    if (fp == NULL) {
        printf("Ops! Não é possível continuar o programa...\n");
        return 0;
    }
    
    fwrite(cliente, sizeof(Cliente), 1, fp);
    fclose(fp);
    return 0;

}

void exibeCliente(Cliente* cli) {
  system("cls || clear");
  if ((cli == NULL) || (cli->status == 'i')) {
    printf("\n= = = Cliente Inexistente = = =\n");
  } else {
    printf("\n= = = Cliente Cadastrado = = =\n");
    printf("Nome do Cliente: %s\n", cli->nome);
    printf("E-mail: %s\n", cli->email);
    printf("CPF: %s\n", cli->cpf);
    printf("Celular: %s\n", cli->celular);
    printf("Situação do Cliente: %c\n", cli->status);
  }
}

int buscaInfoUsuario(void)
{
    FILE* fp;
    Cliente* clientes;
    int achou;
    char procurado[15]; 
    fp = fopen("clientes.dat", "rb");

    if (fp == NULL) {
        printf("Ops! Erro na abertura do arquivo!\n");
        return 0;
    }   
    printf("\n\n");
    system(" cls || clear ");
    printf(" | ========================================================= | \n");
    printf(" | --------------------------------------------------------- | \n");
    printf(" |                   Buscar dados do cliente                 | \n");
    printf(" | ========================================================= | \n");
    printf("Informe o seu cpf: ");
    scanf(" %30[^\n]", procurado);
    getchar();   
    clientes = (Cliente*) malloc(sizeof(Cliente));  
    achou = 0;  
    while((!achou) && (fread(clientes, sizeof(Cliente), 1, fp))) {
        if ((strcmp(clientes->cpf, procurado) == 0) && (clientes->status == 'a')) {
            achou = 1;
        }
    }
    if (achou) {
        system(" cls || clear" );
        exibeClienteAposListagem(clientes);
    
    } else {
        printf("Os dados do usuário %s não foram encontrados\n", procurado);
    }
    free(clientes);
    fclose(fp); 
    printf(" | Pressione qualquer tecla para sair.... ");
    getchar();
    return 0; 
}

void exibeClienteAposListagem(Cliente* clientes) {
  if ((clientes == NULL) || (clientes->status == 'i')) {
    printf("\n= = = Cliente Inexistente = = =\n");
  } else {
    printf("Nome do Cliente: %s\n", clientes->nome);
    printf("E-mail: %s\n", clientes->email);
    printf("CPF: %s\n", clientes->cpf);
    printf("Celular: %s\n", clientes->celular);
    printf("Situação do Cliente: %c\n", clientes->status);
    printf("\n\n");
    printf("Pressione qualquer tecla para sair... ");
    getchar();
  }
}

int listaInfoUsuario(void) 
{
    FILE* fp;
    Cliente* clientes;
    
    fp = fopen("clientes.dat", "rb");
    
    if (fp == NULL) {
        printf("Ops! Erro na abertura do arquivo!\n");
        return 0;
    }
    clientes = (Cliente*)malloc(sizeof(Cliente)); 
    while(fread(clientes, sizeof(Cliente), 1, fp)) {
        system(" cls || clear");
        printf(" | ==================== Lista Usuário ====================== | \n");
        printf(" |                                                           | \n");
        exibeClienteAposListagem(clientes);
    } 
    fclose(fp);
    free(clientes);
    return 0;

}
int infoExcluir(void)
{
    FILE* fp;
    Cliente* clientes;
    int achou;
    char resp;
    char procurado[20];
    
    fp = fopen("clientes.dat", "r+b");

    if (fp == NULL){
        printf("Ops! Erro na abertura do arquivo!\n");
        return 0;
    }
    clientes = (Cliente*) malloc(sizeof(clientes));
    system( " clear || cls ");
    printf(" | ============================================================== | \n");
    printf(" | -------------------------------------------------------------- | \n");
    printf(" | ---------------------- Excluir Usuário ----------------------- | \n");
    printf(" |                                                                | \n");
    printf(" | Informe o username do usuário que você quer excluir: ");
    scanf(" %30[^\n]", procurado);
    getchar();  
    achou = 0;
    
    while ((!achou) && (fread(clientes, sizeof(Cliente), 1, fp))){
        if ((strcmp(clientes->cpf, procurado) == 0) && (clientes->status == 'a')){
            achou = 1;
        }
    }
   if (achou){
        exibeCliente(clientes);
        printf("Deseja realmente excluir os dados deste usuário? (s/n) \n");
        scanf("%c", &resp);
        
        if (resp == 's' || resp == 'S'){
            clientes->status = 'i';
            fseek(fp, (-1)*sizeof(Cliente), SEEK_CUR);
            fwrite(clientes, sizeof(Cliente), 1, fp);
            printf("\nUsuário excluído com sucesso!\n");
            gravaCliente(clientes);
            getchar();   
        }else{
        
            printf("\nTudo bem, os dados não foram alterados!");
        
        }
    }else{
    
        printf("O usuário não foi encontrado!");
    
    }  
    free(clientes);
    fclose(fp);   
    printf(" | Pressione qualquer tecla para sair.... ");
    getchar();  
    return 0;
    
}


void editarCliente(void) {
  system("cls || clear");
  FILE* fp;
  Cliente* cli;
  int achou;
  char resp;
  char procurado[15];
  fp = fopen("clientes.dat", "r+b");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  printf("\n\n");
  printf("= = Editar Cliente = = \n");
  printf("Informe o nome do cliente a ser alterado: ");
  scanf(" %14[^\n]", procurado);
  getchar();
  cli = (Cliente*) malloc(sizeof(Cliente));
  achou = 0;
  while((!achou) && (fread(cli, sizeof(Cliente), 1, fp))) {
   if ((strcmp(cli->nome, procurado) == 0) && (cli->status == 'a')) {
     achou = 1;
   }
  }
  if (achou) {
    exibeCliente(cli);
    getchar();
    printf("Deseja realmente editar este cliente (s/n)? ");
    scanf("%c", &resp);
    getchar();
    if (resp == 's' || resp == 'S') {

      printf("Informe o nome do cliente: ");
      scanf(" %80[^\n]", cli->nome);
      getchar();

      do {
        printf("Informe o e-mail do cliente: ");
        scanf(" %50[^\n]", cli->email);
        getchar();

      } while (!lerEmail(cli->email));

    
      do{
          printf("Informe o CPF do cliente: ");
          scanf(" %15[^\n]", cli->cpf);
          getchar();
      }while(!valida_cpf(cli->cpf));

    
      do{
          printf("Informe o celular junto com o DDD do cliente(apenas números): ");
          scanf(" %19[^\n]", cli->celular);
          getchar();
      }while(!valida_cel(cli->celular));


      do {
          printf("Data de nascimento:\n");
          printf("Informe o dia: ");
          scanf("%d", &cli->dia);
          getchar();
          printf("Informe o mês: ");
          scanf("%d", &cli->mes);
          getchar();
          printf("Informe o an: ");
          scanf("%d", &cli->ano);
          getchar();
      } while(!valida_data(cli->dia, cli->mes, cli->ano));

      cli->status = 'a';

      fseek(fp, (-1)*sizeof(Cliente), SEEK_CUR);
      fwrite(cli, sizeof(Cliente), 1, fp);
      printf("\n Cliente editado com sucesso!!\n");
    } else {
      printf("\nOk, os dados não foram alterados\n");
    }
  } else {
    printf("O cliente %s não foi encontrado...\n", procurado);
  }
  free(cli);
  fclose(fp);
}


int validaUser(char* user)
{
    FILE *fp;
    Cliente *usuarioArq;

    usuarioArq = (Cliente*)malloc(sizeof(Cliente));
    
    fp = fopen("clientes.dat", "rt");
    
    if (fp == NULL)
    {

        fclose(fp);
        return 1;
    } 

    while (!feof(fp))
    {
        fread(usuarioArq, sizeof(Cliente), 1, fp);
        if (strcmp(user, usuarioArq->cpf) == 0 && (usuarioArq->status != 'i'))
        {
            fclose(fp);
            return 0;
        }
    }
    fclose(fp);
    return 1;

}
