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
void editar_advogado(void);
void agenda_advogado(void);
void remover_advogado(void);
void pesquisar_cliente(void);
void cadastrar_cliente(void);
void editar_cliente(void);
void agenda_cliente(void);
void remover_cliente(void);
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


    while (opc != 0){

        if (opc == 1){
            area_advogado();
            break;
        }else if (opc == 2){
            area_cliente();
            break;
        }else if(opc == 3){
            agenda_geral();
            break;
        }else if(opc == 4){
            sobre();
            break;
        }
    }  

}
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////// A D V O G A D O /////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

void area_advogado(void){
    system("clear||cls");
    printf("==========================================\n");
    printf("|             ÁREA DO ADVOGADO           |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("| 1 - PESQUISAR ADVOGADO                 |\n");
    printf("| 2 - CADASTRAR ADVOGADO                 |\n");
    printf("| 3 - EDITAR ADVOGADO                    |\n");
    printf("| 4 - AGENDA DO ADVOGADO                 |\n");
    printf("| 5 - REMOVER ADVOGADO                   |\n");
    printf("| 0 - VOLTAR                             |\n");
    printf("==========================================\n");
    
    int opc;

    printf("Digite o número de uma opção: ");
    scanf("%i", &opc);

    
    if (opc == 1){
        pesquisar_advogado();
    }else if (opc == 2){
        cadastrar_advogado();
    }else if(opc == 3){
        editar_advogado();
    }else if(opc == 4){
        agenda_advogado();
    }else if(opc == 5){
        remover_advogado();
    }else if(opc == 0){
        principal();
    }
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
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                          PESQUISAR ADVOGADO                             ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    int token;
    printf("Informe o token do advogado para pesquisar (apenas números): \n");
    scanf("%i", &token);
    getchar();
    printf("Função ainda em desenvolvimento, tecle ENTER para voltar para área do advogado");
    getchar();
    area_advogado();
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
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    char nome, email;
    int token, nascimento, celular;

    printf("Token (apenas números): \n");
    scanf("%i", &token);
    getchar();
    printf("Nome completo: \n");
    scanf("%s", &nome);
    getchar();
    printf("E-mail: \n");
    scanf("%s", &email);
    getchar();
    printf("Data de Nascimento (dd/mm/aaaa): \n");
    scanf("%i", &nascimento);
    getchar();
    printf("Celular  (apenas números): \n");
    scanf("%i", &celular);
    getchar();
    printf("Advogado cadastrado com sucesso! Tecle ENTER para voltar para área do advogado");
    getchar();
    area_advogado();

}

void editar_advogado(){
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
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                             EDITAR ADVOGADO                             ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    int token;
    printf("Informe o token do advogado para editar (apenas números): \n");
    scanf("%i", &token);
    getchar();
    printf("Função ainda em desenvolvimento, tecle ENTER para voltar para área do advogado");
    getchar();
    area_advogado();
}

void agenda_advogado(void){
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
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                            AGENDA DO ADVOGADO                           ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    int token;
    printf("Informe o token do advogado para acessar a agenda (apenas números): \n");
    scanf("%i", &token);
    getchar();
    printf("Função ainda em desenvolvimento, tecle ENTER para voltar para área do advogado");
    getchar();
    area_advogado();
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
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                            REMOVER ADVOGADO                             ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    int token;
    printf("Informe o token do advogado para remover (apenas números): \n");
    scanf("%i", &token);
    getchar();
    printf("Função ainda em desenvolvimento, tecle ENTER para voltar para área do advogado");
    getchar();
    area_advogado();
}


///////////////////////////////////////////////////////////////////////////
////////////////////////////// C L I E N T E //////////////////////////////
///////////////////////////////////////////////////////////////////////////
void area_cliente(void){
    system("clear||cls");
    printf("==========================================\n");
    printf("|             ÁREA DO CLIENTE            |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("| 1 - PESQUISAR CLIENTE                  |\n");
    printf("| 2 - CADASTRAR CLIENTE                  |\n");
    printf("| 3 - EDITAR CLIENTE                     |\n");
    printf("| 4 - AGENDA DO CLIENTE                  |\n");
    printf("| 5 - REMOVER CLIENTE                    |\n");
    printf("| 0 - VOLTAR                             |\n");
    printf("==========================================\n");

    int opc;

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
    }else if(opc == 0){
        principal();
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
    area_cliente();
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

    char nome, email;
    int token, nascimento, celular;

    printf("Token (apenas números): \n");
    scanf("%i", &token);
    getchar();
    printf("Nome completo: \n");
    scanf("%s", &nome);
    getchar();
    printf("E-mail: \n");
    scanf("%s", &email);
    getchar();
    printf("Data de Nascimento (dd/mm/aaaa): \n");
    scanf("%i", &nascimento);
    getchar();
    printf("Celular  (apenas números): \n");
    scanf("%i", &celular);
    getchar();
    printf("Cliente cadastrado com sucesso! Tecle ENTER para voltar para área do cliente");
    getchar();
    area_cliente();

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
    area_cliente();

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
    area_cliente();

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
    area_cliente();
}

///////////////////////////////////////////////////////////////////////////
////////////////////////////// A G E N D A ////////////////////////////////
///////////////////////////////////////////////////////////////////////////

void agenda_geral(void){

    printf("==========================================\n");
    printf("|             AGENDA GERAL               |\n");
    printf("==========================================\n");
    printf("|                                        |\n");
    printf("| 1 - LISTAR EVENTOS                     |\n");
    printf("| 2 - CADASTRAR NOVO EVENTO              |\n");
    printf("| 3 - EDITAR EVENTO                      |\n");
    printf("| 4 - REMOVER EVENTO                     |\n");
    printf("| 0 - VOLTAR                             |\n");
    printf("==========================================\n");

    int opc;

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
    }else if(opc == 0){
        principal();
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

    printf("Função ainda em desenvolvimento, tecle ENTER para voltar para a agenda geral");
    getchar();
    agenda_cliente();
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
    
    int token_evento, token_advogado, token_cliente, data;
    char nome;

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
    scanf("%i", &data);
    getchar();
    printf("Evento cadastrado com sucesso! Tecle ENTER para voltar para área a agenda geral");
    getchar();
    agenda_geral();

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
    agenda_geral();

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
    agenda_geral();
}


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
    
    char opc;
    printf("Você deseja voltar ao menu principal? (s/n)\n");
    scanf("%s", &opc);
    
    if (opc == 's'){
        principal();
    }else{
        printf("Programa finalizado!");
    }
    
}