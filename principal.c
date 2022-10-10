#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "advogado.h"
#include "cliente.h"

//assinatura de telas
void login(void);
void principal(void);
void sobre(void);
void agenda_geral(void);
void listar_eventos(void);
void cadastrar_evento(void);
void editar_evento(void);
void remover_evento(void);

int main(void){
    setlocale(LC_ALL,"portuguese");
    login();
    printf("Programa finalizado");
}


void login(void){

    char user, pass;

    printf("////////////////////////////////////////\n");
    printf("///                                  ///\n");
    printf("///  OLÁ, SEJA BEM-VINDO AO SIG-LAW  ///\n");
    printf("///                                  ///\n");
    printf("////////////////////////////////////////\n");

    printf("Digite seu nome de usuário: \n");
    scanf("%s", &user);

    printf("Digite sua senha: \n");
    scanf("%s", &pass);

    while (user != 'u' && pass != 'p'){
        printf("Credenciais inválidas, tente novamente: \n");
        printf("Digite seu nome de usuário: \n");
        scanf("%s", &user);

        printf("Digite sua senha: \n");
        scanf("%s", &pass);
    }

    printf("Usuário logado com sucesso!\n");
    system("clear||cls");
    principal();


}


 void principal(void){
    int opc;
    while (opc !=0){
        system("clear||cls");
        printf("/////////////////////////////////////////////////////////////////\n");
        printf("///             ========== Semana 5 ==========                ///\n");
        printf("/////////////////////////////////////////////////////////////////\n");
        printf("///                                                           ///\n");
        printf("///  Universidade Federal do Rio Grande do Norte              ///\n");
        printf("///  Centro de Ensino Superior do Seridó                      ///\n");
        printf("///  Departamento de Computação e Tecnologia                  ///\n");
        printf("///  Disciplina DCT1106 -- Programação                        ///\n");
        printf("///  Projeto                                                  ///\n");
        printf("///  Sistema de agendamento para escritório de advocacia      ///\n");
        printf("///                                                           ///\n");
        printf("/////////////////////////////////////////////////////////////////\n");
        printf("///               ========== MENU ==========                  ///\n");
        printf("/////////////////////////////////////////////////////////////////\n");
        printf("///                                                           ///\n");
        printf("///  1 - ÁREA DO ADVOGADO;                                    ///\n");
        printf("///  2 - ÁREA DO CLIENTE;                                     ///\n");
        printf("///  3 - AGENDA GERAL;                                        ///\n");
        printf("///  4 - SOBRE O PROGRAMA;                                    ///\n");
        printf("///  0 - SAIR;                                                ///\n");
        printf("///                                                           ///\n");
        printf("/////////////////////////////////////////////////////////////////\n");

        printf("Digite o número de uma opção: ");
        scanf("%i", &opc);
        
        if (opc == 1){
            system("clear||cls");
            area_advogado();
            
        }else if (opc == 2){
            area_cliente();
            
        }else if(opc == 3){
            agenda_geral();
        
        }else if(opc == 4){
            sobre();

            
        } else if (opc == 0){
            printf("Programa finalizado.");
        }else if (opc > 4 || opc < 0){
        getchar();
        printf("Número digitado não reconhecido, pressione enter para tentar novamente.");
        getchar();
        principal();

        }else if (opc > 4 || opc < 0){
            getchar();
            printf("Número digitado não reconhecido, pressione enter para tentar novamente");
            getchar();
        }

    }
 }


///////////////////////////////////////////////////////////////////////////
////////////////////////////// A G E N D A ////////////////////////////////
///////////////////////////////////////////////////////////////////////////

void agenda_geral(void){
    int opc;
    while (opc != 0){
    system("clear||cls");
    printf("/////////////////////////////////////////////\n");
    printf("///       ===== AGENDA GERAL =====        ///\n");
    printf("/////////////////////////////////////////////\n");
    printf("///                                       ///\n");
    printf("///  1 - LISTAR EVENTOS                   ///\n");
    printf("///  2 - CADASTRAR NOVO EVENTO            ///\n");
    printf("///  3 - EDITAR EVENTO                    ///\n");
    printf("///  4 - REMOVER EVENTO                   ///\n");
    printf("///  0 - VOLTAR                           ///\n");
    printf("/////////////////////////////////////////////\n");

    printf("Digite o número de uma opção: ");
    scanf("%i", &opc);

    if (opc == 1){
        listar_eventos();
    }else if (opc == 2){
        cadastrar_evento();
    }else if(opc == 3){
        editar_evento();
    }else if(opc == 4){
        remover_evento();
    }else if (opc > 4 || opc < 0){
      getchar();

      printf("Número digitado não reconhecido, pressione enter para tentar novamente.");

      printf("Número digitado não reconhecido, pressione enter para tentar novamente.");

      getchar();
    }
    
}
}


void listar_eventos(){
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
    printf("///                           LISTAGEM DE EVENTOS                           ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
    printf("Função ainda em desenvolvimento, tecle ENTER para voltar para a agenda geral");
    getchar();
}

void cadastrar_evento(void){
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
    printf("///                            CADASTRAR EVENTO                             ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    
    int token_evento, token_advogado, token_cliente;
    char nome, data;

    printf("Token do evento (apenas números): \n");
    scanf("%i", &token_evento);
    getchar();
    printf("Nome do evento: \n");
    scanf("%s", &nome);
    getchar();
    printf("Token do advogado vinculado ao evento (apenas números): \n");
    scanf("%i", &token_advogado);
    getchar();
    printf("Token do cliente vinculado ao evento (apenas números): \n");
    scanf("%i", &token_cliente);
    getchar();
    printf("Data do evento (dd/mm/aaaa): \n");
    scanf("%s", &data);
    getchar();
    printf("Evento cadastrado com sucesso! Tecle ENTER para voltar para área a agenda geral");
    getchar();
    

}

void editar_evento(void){
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
    printf("///                              EDITAR EVENTO                              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    
    int token;
    printf("Informe o token do evento para editar (apenas números): \n");
    scanf("%i", &token);
    getchar();
    printf("Função ainda em desenvolvimento, tecle ENTER para voltar para a agenda geral");
    getchar();
    

}
void remover_evento(void){
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
    printf("///                             REMOVER EVENTO                              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

    int token;
    printf("Informe o token do evento para remover (apenas números): \n");
    scanf("%i", &token);
    getchar();
    printf("Função ainda em desenvolvimento, tecle ENTER para voltar para a agenda geral");
    getchar();
    
}


void sobre(void){
    system("clear||cls");
    printf("////////////////////////////////////////////////////////////////////////////\n");
    printf("///                            Sobre o Projeto                           ///\n");
    printf("////////////////////////////////////////////////////////////////////////////\n");
    printf("///                     Equipe que realizou o projeto                    ///\n");
    printf("////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                      ///\n");
    printf("///              Alunos: Janderson Natan & Ricardo Alencar               ///\n");
    printf("///                                                                      ///\n");
    printf("///    Alunos do curso de BSI (Bacharelado de Sistemas de Informação)    ///\n");
    printf("///                                                                      ///\n");
    printf("///               Instagram: @janderson_natan e @eualencaar              ///\n");
    printf("///                                                                      ///\n");
    printf("///                  Github: @janderson1111 e @ricsjs                    ///\n");
    printf("///                                                                      ///\n");
    printf("///                                                                      ///\n");
    printf("////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                      ///\n");
    printf("///             ========== Finalidade do Projeto ==========              ///\n");
    printf("///                                                                      ///\n");
    printf("////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                      ///\n");
    printf("///    O projeto foi desgninado pelo professor Flavius Gorgônio          ///\n");
    printf("///    que leciona a diciplina de Programação - DCT1106 na UFRN.         ///\n");
    printf("///    O tema do nosso projeto é criar um sistema de agendamento         ///\n");
    printf("///    para escritório de advocacia.                                     ///\n");
    printf("///    Esse sistema foi desenvolvido na linguagem C, ele servirá         ///\n");
    printf("///    para facilitar o agendamento de reuniões e eventos                ///\n");
    printf("///    do setor jurídico, para que não hajam imprevistos com horários.   ///\n");
    printf("///                                                                      ///\n");
    printf("///            ========== O sistema conta com: ============              ///\n");
    printf("///                                                                      ///\n");
    printf("///                   ÁREA DO ADVOGADO;                                  ///\n");
    printf("///                   ÁREA DO CLIENTE;                                   ///\n");
    printf("///                   AGENDA GERAL;                                      ///\n");
    printf("///                                                                      ///\n");
    printf("////////////////////////////////////////////////////////////////////////////\n");
    
    getchar();
    printf("Tecle ENTER para voltar para área pricipal do programa");
    getchar();
    
}

 


///////////////////////// criar relatorio com informa��es precisas, ex; todos os Advogado. todos os clientes. 
//////////todos os eventos, dentre outras areas especi