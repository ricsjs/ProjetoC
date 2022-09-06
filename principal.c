# include <stdio.h>
# include <stdlib.h>

//assinatura de telas
void login(void);
void principal(void);
void sobre(void);
void area_advogado(void);
void area_cliente(void);
void agenda_geral(void);
void pesquisar_advogado(void);
void cadastrar_advogado(void);
void excluir_advogado(void);
void agenda_advogado(void);
void editar_advogado(void);
void pesquisar_cliente(void);
void cadastrar_cliente(void);
void excluir_cliente(void);
void agenda_cliente(void);
void editar_cliente(void);
void listar_eventos(void);
void cadastrar_evento(void);
void editar_evento(void);
void remover_evento(void);

int main(void){

    login();

}


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

    if (opc == 1){
        area_advogado();
    }else if (opc == 2){
        area_cliente();
    }else if(opc == 3){
        agenda_geral();
    }else if(opc == 4){
        sobre();
    }else if(opc == 0){
        printf("Encerrando programa...\n");
    }
    
    

}


void area_advogado(void){
    system("clear||cls");
    printf("==========================================\n");
    printf("|             ÁREA DO ADVOGADO           |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("| 1 - PESQUISAR ADVOGADO                 |\n");
    printf("| 2 - CADASTRAR ADVOGADO                 |\n");
    printf("| 3 - REMOVER ADVOGADO                   |\n");
    printf("| 4 - AGENDA DO ADVOGADO                 |\n");
    printf("| 5 - EDITAR ADVOGADO                    |\n");
    printf("| 0 - VOLTAR                             |\n");
    printf("==========================================\n");
    getchar();

}

void pesquisar_advogado(void){
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
    printf("///             Informe o token do advogado (apenas números):               ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
}

void cadastrar_advogado(){
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
    printf("///            = = = = = = =  CADASTRAR ADVOGADO = = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            Token (apenas números):                                      ///\n");
    printf("///            Nome completo:                                               ///\n");
    printf("///            E-mail:                                                      ///\n");
    printf("///            Data de Nascimento (dd/mm/aaaa):                             ///\n");
    printf("///            Celular  (apenas números):                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
}

void remover_advogado(void) {
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
    printf("///            = = = = = = =  REMOVER ADVOGADO = = = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            Informe o token do advogado (apenas números):                ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
}

//criar agenda_advogado();
//criar editar_advogado();
//as assinaturas já foram feitas



void area_cliente(void){

    printf("==========================================\n");
    printf("|             ÁREA DO CLIENTE            |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("| 1 - PESQUISAR CLIENTE                  |\n");
    printf("| 2 - CADASTRAR CLIENTE                  |\n");
    printf("| 3 - REMOVER CLIENTE                    |\n");
    printf("| 4 - AGENDA DO CLIENTE                  |\n");
    printf("| 4 - EDITAR CLIENTE                     |\n");
    printf("| 0 - VOLTAR                             |\n");
    printf("==========================================\n");
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
    printf("///             Informe o token do cliente (apenas números):                ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

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
    printf("///            = = = = = = =  CADASTRAR CLIENTE  = = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            Token (apenas números):                                      ///\n");
    printf("///            Nome completo:                                               ///\n");
    printf("///            E-mail:                                                      ///\n");
    printf("///            Data de Nascimento (dd/mm/aaaa):                             ///\n");
    printf("///            Celular  (apenas números):                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
}

//criar remover_cliente();
//criar agenda_cliente();
//criar editar_cliente();
//as assinaturas já foram feitas

void agenda_geral(void){

    printf("==========================================\n");
    printf("|             AGENDA GERAL               |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("| 1 - LISTAR EVENTOS                     |\n");
    printf("| 2 - CADASTRAR NOVO EVENTO              |\n");
    printf("| 3 - EDITAR EVENTO                      |\n");
    printf("| 4 - EXCLUIR EVENTO                     |\n");
    printf("| 0 - VOLTAR                             |\n");
    printf("==========================================\n");
    
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
    printf("///                            LISTAGEM DE EVENTOS                          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
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
    printf("///            = = = = = = =  CADASTRAR EVENTO   = = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            Nome do evento:                                              ///\n");
    printf("///            Data do evento (dd/mm/aaaa):                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
}

//criar editar_evento();
//criar remover_evento();
//as assinaturas já estão criadas

void sobre(void){
    system("clear||cls");
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
    printf("| ÁREA DO ADVOGADO;                      |\n");
    printf("| ÁREA DO CLIENTE;                       |\n");
    printf("| AGENDA GERAL;                          |\n");
    printf("| SOBRE O PROGRAMA;                      |\n");
    printf("|                                        |\n");
    printf("==========================================\n");
    getchar();

}
 