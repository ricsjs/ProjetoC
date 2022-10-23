#include <stdio.h>
#include <stdlib.h>
#include "advogado.h"
#include "validacoes.h"

void area_advogado(void){
    int opc;
    while (opc != 0){
    system("clear||cls");
    printf("/////////////////////////////////////////////\n");
    printf("///      ===== ÁREA DO ADVOGADO =====     ///\n");
    printf("/////////////////////////////////////////////\n");
    printf("///                                       ///\n");
    printf("///  1 - PESQUISAR ADVOGADO               ///\n");
    printf("///  2 - CADASTRAR ADVOGADO               ///\n");
    printf("///  3 - EDITAR ADVOGADO                  ///\n");
    printf("///  4 - AGENDA DO ADVOGADO               ///\n");
    printf("///  5 - REMOVER ADVOGADO                 ///\n");
    printf("///  0 - VOLTAR                           ///\n");
    printf("///                                       ///\n");
    printf("/////////////////////////////////////////////\n");

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
    }else if (opc > 5 || opc < 0){
      getchar();

      printf("Número digitado não reconhecido, pressione enter para tentar novamente.");

      getchar();
    }

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
    char nome, Email[50], cpf[15], celular;
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
        printf(" | Informe o dia de nascimento: ");
        scanf("%d", &dia);
        getchar();
        printf(" | Informe o mês de nascimento: ");
        scanf("%d", &mes);
        getchar();
        printf(" | Informe o ano de nascimento: ");
        scanf("%d", &ano);
        getchar();
        
    } while(!valida_data(dia, mes, ano));
    
    printf("Celular  (apenas números): \n");
    scanf("%s", &celular);
    getchar();
    printf("Advogado cadastrado com sucesso! Tecle ENTER para voltar para área do advogado");
    getchar();
    

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
    
}