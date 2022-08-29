# include <stdio.h>
# include <stdlib.h>

void inicio (void){

    printf ( "==================================\n " );
    printf ( "|                                |\n " );
    printf ( "| OLA, SEJA BEM-VINDO AO SIG-LAW |\n " );
    printf ( "|                                |\n " );
    printf ( "================================== \n " );
    
    return 0;

    // a tela principal (menu), abrirá assim que as credenciais corretas forem digitadas

}


 void principal (void){

    

    printf("=============================================================\n");
    printf("|                         Semana 1                          |\n");
    printf("=============================================================\n");
    printf("|                                                           |\n");
    printf("|    Universidade Federal do Rio Grande do Norte            |\n");
    printf("|    Centro de Ensino Superior do Serido                    |\n");
    printf("|    Departamento de Computacao e Tecnologia                |\n");
    printf("|    Disciplina DCT1106 -- Programacao                      |\n");
    printf("|    Projeto                                                |\n");
    printf("|    Sistema de agendamento para escritorio de advocacia    |\n");
    printf("|                                                           |\n");
    printf("=============================================================\n");
    return 0;

}

void sobre (void){

    printf("==========================================\n");
    printf("|            Sobre o Projeto             |\n");
    printf("==========================================\n");
    printf("|     Equipe Que Realizou o Projeto      |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("|         Alunos: Janderson Nata         |\n");
    printf("|         E ricardo Alencar              |\n");
    printf("|                                        |\n");
    printf("|         Alunos do curso de BSI         |\n");
    printf("|  Bachareldo de Sistemas de Informação  |\n");
    printf("|                                        |\n");
    printf("|    Instagram: @janderson_natan         |\n");
    printf("|    e @ricardo_alenca                   |\n");
    printf("|                                        |\n");
    printf("|          Github: @janderson1111        |\n");
    printf("|          e @ricsjs                     |\n");
    printf("|                                        |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("|         finalidade do Projeto          |\n");
    printf("|                                        |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("| O projeto foi desgninado pelo professor|\n");
    printf("| Flavios Gorgonio que leciona a dicipli-|\n");
    printf("| na de Programação - DCT1106 na UFRN.   |\n");
    printf("| O tema do nosso projeto é cria um sis- |\n");
    printf("| tema de agendamento para escritorio de |\n");
    printf("| advocaia. Esse sistema deve ser criado |\n");
    printf("| Na linguagem C, ele servirar para faci-|\n");
    printf("| litar o agendamento de reunioes e even-|\n");
    printf("| tos do setor juridico, para que nao    |\n");
    printf("| tenha imprevistos com horarios.        |\n");
    printf("|                                        |\n");
    printf("| O sistema deve contar com:             |\n");
    printf("| Cadastro de Advogados;                 |\n");
    printf("| Cadastro de clietes;                   |\n");
    printf("| Agendamento de Reunioes;               |\n");
    printf("| Agenda do Advogado;                    |\n");
    printf("| Agenda do Cliente;                     |\n");
    printf("|                                        |\n");
    printf("==========================================\n");
    return 0;

}

int main(void){

    inicio();
    
    principal();

    sobre();

    return 0;
} 