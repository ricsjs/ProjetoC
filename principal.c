# include <stdio.h>
# include <stdlib.h>

//assinatura das telas
void login(void);
void principal(void);
void sobre(void);
void area_advogado(void);
void area_cliente(void);
void agenda_geral(void);

void login(void){

    char user[30], pass[30];

    printf("==================================\n");
    printf("|                                |\n");
    printf("| OLÁ, SEJA BEM-VINDO AO SIG-LAW |\n");
    printf("|                                |\n");
    printf("==================================\n");

    printf("Digite seu usuário: ");
    scanf("%s", user);
 
    printf("Digite sua senha: ");
    scanf("%s", pass);
    

    //a tela principal (menu), abrirá assim que as credenciais corretas forem digitadas

}


 void principal(void){

    printf("=============================================================\n");
    printf("|                         Semana 1                          |\n");
    printf("=============================================================\n");
    printf("|                                                           |\n");
    printf("|    Universidade Federal do Rio Grande do Norte            |\n");
    printf("|    Centro de Ensino Superior do Seridó                    |\n");
    printf("|    Departamento de Computação e Tecnologia                |\n");
    printf("|    Disciplina DCT1106 -- Programação                      |\n");
    printf("|    Projeto                                                |\n");
    printf("|    Sistema de agendamento para escritório de advocacia    |\n");
    printf("|                                                           |\n");
    printf("=============================================================\n");

    printf("=============================================================\n");
    printf("|                            MENU                           |\n");
    printf("=============================================================\n");
    printf("1 - ÁREA DO ADVOGADO;");
    printf("2 - ÁREA DO CLIENTE;");
    printf("3 - AGENDA GERAL;");
    printf("4 - SOBRE O PROGRAMA;");
    printf("0 - SAIR;");

}

void area_advogado(void){

}

void area_cliente(void){

}

void agenda_geral(void){
    
}

void sobre(void){

    printf("==========================================\n");
    printf("|            Sobre o Projeto             |\n");
    printf("==========================================\n");
    printf("|     Equipe que realizou o projeto      |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("|         Alunos: Janderson Natan        |\n");
    printf("|         & Ricardo Alencar              |\n");
    printf("|                                        |\n");
    printf("|         Alunos do curso de BSI         |\n");
    printf("|  Bacharelado de Sistemas de Informação |\n");
    printf("|                                        |\n");
    printf("|    Instagram: @janderson_natan         |\n");
    printf("|    e @eualencaar                       |\n");
    printf("|                                        |\n");
    printf("|          Github: @janderson1111        |\n");
    printf("|          e @ricsjs                     |\n");
    printf("|                                        |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("|         Finalidade do Projeto          |\n");
    printf("|                                        |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("| O projeto foi desgninado pelo professor|\n");
    printf("| Flavius Gorgônio que leciona a dicipli-|\n");
    printf("| na de Programação - DCT1106 na UFRN.   |\n");
    printf("| O tema do nosso projeto é criar um sis-|\n");
    printf("| tema de agendamento para escritório de |\n");
    printf("| advocacia. Esse sistema deve ser criado|\n");
    printf("| na linguagem C, ele servirá para faci- |\n");
    printf("| litar o agendamento de reuniões e even-|\n");
    printf("| tos do setor jurídico, para que não    |\n");
    printf("| hajam imprevistos com horários.        |\n");
    printf("|                                        |\n");
    printf("| O sistema deve contar com:             |\n");
    printf("| Área do adovado;                       |\n");
    printf("| Área do cliente;                       |\n");
    printf("| AGENDA GERAL;                          |\n");
    printf("| SOBRE O PROGRAMA;                      |\n");
    printf("|                                        |\n");
    printf("==========================================\n");

}

int main(void){

    login();
    
    principal();

    sobre();
} 