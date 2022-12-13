#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "advogado.h"
#include "cliente.h"
#include "agenda.h"

//assinatura de telas
void login(void);
void principal(void);
void sobre(void);

int main(void){
    setlocale(LC_ALL,"portuguese");
    login();
    printf("Programa finalizado");
}


void login(void){

    char user, pass;

    printf("//////////////////////////////////////////////////////////////////\n");
    printf("///                                                            ///\n");
    printf("///               OLÁ, SEJA BEM-VINDO AO SIG-LAW               ///\n");
    printf("///                                                            ///\n");
    printf("//////////////////////////////////////////////////////////////////\n");
    printf("///                                                            ///\n");
    printf("///  ESSE PROGRAMA FOI DESENVOLVIDO PARA AUXILIAR ESCRITORIOS  ///\n");
    printf("///  DE ADVOCACIAS EM AGENDAMENTO DE EVENTOS                   ///\n");
    printf("///                                                            ///\n");
    printf("//////////////////////////////////////////////////////////////////\n");


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
    system("clear||cls");
    principal();


}


 void principal(void){
    int opc;
    while (opc !=0){
        system("clear||cls");
        printf("/////////////////////////////////////////////////////////////////\n");
        printf("///        ========== SISTEMA DE ADVOCACIA ==========         ///\n");
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
        printf("///  1 - ÁREA DO ADVOGADO                                     ///\n");
        printf("///  2 - ÁREA DO CLIENTE                                      ///\n");
        printf("///  3 - AGENDA GERAL                                         ///\n");
        printf("///  4 - SOBRE O PROGRAMA                                     ///\n");
        printf("///  0 - SAIR                                                 ///\n");
        printf("///                                                           ///\n");
        printf("/////////////////////////////////////////////////////////////////\n");

        printf("Digite o número de uma opção: ");
        scanf("%i", &opc);
        
        if (opc == 1){
            system("clear||cls");
            menu_advogado();
            
        }else if (opc == 2){
            system("clear||cls");
            menu_cliente(); 
            
        }else if(opc == 3){
            system("clear||cls");
            menu_agenda();

        }else if(opc == 4){
            system("clear||cls");
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