///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Gestão Escolar                      ///
///             Developed by @ricsjs & @janderson1111 -- since Ago, 2022    ///
///////////////////////////////////////////////////////////////////////////////
///                                Semana 1                                 ///
///////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void tela_login(void);
void tela_principal(void);
void tela_sobre(void);

int main (void){
    tela_login();
    tela_principal();
    tela_sobre();
    return  0 ;
}

void tela_login(void){

    char user[30], pass[30];

    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                      OLÁ, SEJA BEM-VINDO AO SIG-LAW                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
 
    printf("Digite seu usuário: ");
    scanf("%s", user);
 
    printf("Digite sua senha: ");
    scanf("%s", pass);
 
    printf("Usuário: %s, Senha: %s\n", user, pass);
    return 0;

    //a tela principal (menu), abrirá assim que as credenciais corretas forem digitadas

}

void tela_principal(void){

}

void tela_sobre(void){

}

