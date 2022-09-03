# include <stdio.h>
# include <stdlib.h>

//assinatura de telas
void login(void);
void principal(void);
void sobre(void);
void area_advogado(void);
void area_cliente(void);
void agenda_geral(void);


void login(void){

    char user, pass;

    printf("==================================\n");
    printf("|                                |\n");
    printf("| OLÁ, SEJA BEM-VINDO AO SIG-LAW |\n");
    printf("|                                |\n");
    printf("==================================\n");

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
    principal();

    //a tela principal (menu), abrirá assim que as credenciais corretas forem digitadas

}


 void principal(void){

    printf("=============================================================\n");
    printf("|                         Semana 2                          |\n");
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
    printf("| 1 - ÁREA DO ADVOGADO;                                     |\n");
    printf("| 2 - ÁREA DO CLIENTE;                                      |\n");
    printf("| 3 - AGENDA GERAL;                                         |\n");
    printf("| 4 - SOBRE O PROGRAMA;                                     |\n");
    printf("| 0 - SAIR;                                                 |\n");
    printf("=============================================================\n");

    int opc;

    printf("Digite o número de uma opção: ");
    scanf("%i", &opc);

    printf("%i", opc);

}


void area_advogado(void){

    printf("==========================================\n");
    printf("|             ÁREA DO ADVOGADO           |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("| 1 - LISTAR ADVOGADOS                   |\n");
    printf("| 2 - CADASTRAR ADVOGADO                 |\n");
    printf("| 3 - REMOVER ADVOGADO                   |\n");
    printf("| 4 - AGENDA DO ADVOGADO                 |\n");
    printf("| 0 - VOLTAR                             |\n");
    printf("==========================================\n");

}

void area_cliente(void){

    printf("==========================================\n");
    printf("|             ÁREA DO CLIENTE            |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("| 1 - LISTAR CLIENTES                    |\n");
    printf("| 2 - CADASTRAR CLIENTE                  |\n");
    printf("| 3 - REMOVER CLIENTE                    |\n");
    printf("| 4 - AGENDA DO CLIENTE                  |\n");
    printf("| 0 - VOLTAR                             |\n");
    printf("==========================================\n");
}

void agenda_geral(void){

    printf("==========================================\n");
    printf("|             AGENDA GERAL               |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("| 1 - LISTAR EVENTOS DO DIA              |\n");
    printf("| 2 - LISTAR EVENTOS DA SEMANA           |\n");
    printf("| 3 - LISTAR EVENTOS DO MÊS              |\n");
    printf("| 4 - CADASTRAR NOVO EVENTO              |\n");
    printf("| 0 - VOLTAR                             |\n");
    printf("==========================================\n");
    
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

} 