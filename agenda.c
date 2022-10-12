#include <stdio.h>
#include <stdlib.h>
#include "agenda.h"

void agenda_geral(void){
    int opc;
    while (opc != 0){
    system("clear||cls");
    printf("/////////////////////////////////////////////\n");
    printf("///       ===== AGENDA GERAL =====        ///\n");
    printf("/////////////////////////////////////////////\n");
    printf("///                                       ///\n");
    printf("///  1 - CADASTRAR NOVO EVENTO            ///\n");
    printf("///  2 - EDITAR EVENTO                    ///\n");
    printf("///  3 - REMOVER EVENTO                   ///\n");
    printf("///  0 - VOLTAR                           ///\n");
    printf("/////////////////////////////////////////////\n");

    printf("Digite o número de uma opção: ");
    scanf("%i", &opc);
    
     if (opc == 1){
        cadastrar_evento();
    }else if(opc == 2){
        editar_evento();
    }else if(opc == 3){
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