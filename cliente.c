#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"
#include "validacoes.h"

void area_cliente(void){
    int opc;
    while (opc !=0 ){
    system("clear||cls");
    printf("/////////////////////////////////////////////\n");
    printf("///      ===== ÁREA DO CLIENTE =====      ///\n");
    printf("/////////////////////////////////////////////\n");
    printf("///                                       ///\n");
    printf("///  1 - PESQUISAR CLIENTE                ///\n");
    printf("///  2 - CADASTRAR CLIENTE                ///\n");
    printf("///  3 - EDITAR CLIENTE                   ///\n");
    printf("///  4 - AGENDA DO CLIENTE                ///\n");
    printf("///  5 - REMOVER CLIENTE                  ///\n");
    printf("///  0 - VOLTAR                           ///\n");
    printf("///                                       ///\n");
    printf("/////////////////////////////////////////////\n");

    printf("Digite o número de uma opção: ");
    scanf("%i", &opc);

    if (opc == 1){
        pesquisar_cliente();
    }else if (opc == 2){
        cadastrar_cliente();
    }else if(opc == 3){
        editar_cliente();
    }else if(opc == 4){
        agenda_cliente();
    }else if(opc == 5){
        remover_cliente();
    }else if (opc > 5 || opc < 0){
      getchar();

      printf("Número digitado não reconhecido, pressione enter para tentar novamente.");

      printf("Número digitado não reconhecido, pressione enter para tentar novamente.");

      getchar();
    }
    }
}


void pesquisar_cliente(void){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            = = = = = = =         SIG-LAW         = = = = = = =          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///          Developed by @ricsjs & @janderson1111 -- since Ago, 2022       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                            PESQUISAR CLIENTE                            ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

    int token;
    printf("Informe o token do cliente para pesquisar (apenas números): \n");
    scanf("%i", &token);
    getchar();
    printf("Função ainda em desenvolvimento, tecle ENTER para voltar para área do cliente");
    getchar();
    
}

void cadastrar_cliente(void){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            = = = = = = =         SIG-LAW         = = = = = = =          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///          Developed by @ricsjs & @janderson1111 -- since Ago, 2022       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                            CADASTRAR CLIENTE                            ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

    char nome, Email[50], cpf[15], celular[19];
    int dia, mes, ano;

    do{
        printf("CPF: ");
        scanf("%s",cpf);
        getchar();
    }while(!valida_cpf(cpf));

    printf("Nome completo: \n");
    scanf("%s", &nome);
    getchar();
    
    do {
        printf(" | Informe o seu E-mail: ");   
        scanf("%s", Email);
        getchar();

    } while (!lerEmail(Email));
    
    do {
        printf("Data de nascimento\n");
        printf("Informe o dia: ");
        scanf("%d", &dia);
        getchar();
        printf("Informe o mês: ");
        scanf("%d", &mes);
        getchar();
        printf("Informe o ano: ");
        scanf("%d", &ano);
        getchar();
        
    } while(!valida_data(dia, mes, ano));

    do{
        printf("          Celular (apenas números | Insira DDD): ");
        scanf("%[0-9]",celular);
        getchar();
    }while(!valida_cel(celular));
    
    printf("Cliente cadastrado com sucesso! Tecle ENTER para voltar para área do cliente");
    getchar();

}

void editar_cliente(void){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            = = = = = = =         SIG-LAW         = = = = = = =          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///          Developed by @ricsjs & @janderson1111 -- since Ago, 2022       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                              EDITAR CLIENTE                             ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

    int token;
    printf("Informe o token do cliente para editar (apenas números): \n");
    scanf("%i", &token);
    getchar();
    printf("Função ainda em desenvolvimento, tecle ENTER para voltar para área do cliente");
    getchar();
   

}

void agenda_cliente(){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            = = = = = = =         SIG-LAW         = = = = = = =          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///          Developed by @ricsjs & @janderson1111 -- since Ago, 2022       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                            AGENDA DO CLIENTE                            ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

    int token;
    printf("Informe o token do cliente para acessar a agenda (apenas números): \n");
    scanf("%i", &token);
    getchar();
    printf("Função ainda em desenvolvimento, tecle ENTER para voltar para área do cliente");
    getchar();

    }

void remover_cliente(void ){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            = = = = = = =         SIG-LAW         = = = = = = =          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///          Developed by @ricsjs & @janderson1111 -- since Ago, 2022       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                             REMOVER CLIENTE                             ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            Informe o token do cliente (apenas números):                 ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    
    int token;
    printf("Informe o token do cliente para remover (apenas números): \n");
    scanf("%i", &token);
    getchar();
    printf("Função ainda em desenvolvimento, tecle ENTER para voltar para área do cliente");
    getchar();
}