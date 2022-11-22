#include <stdio.h>
#include <stdlib.h>
#include "relatorio.h"

void area_relatorio(void){

    int opc;
    while ( opc!= 0){
        printf("////////////////////////////////////////////////\n");
        printf("///      ----- ÁREA DE RELATORIO -----       ///\n");
        printf("////////////////////////////////////////////////\n");
        printf("///                                          ///\n");
        printf("///        1- TODOS OS ADVOGADOS             ///\n");
        printf("///        2- TODOS OS CLIENTES              ///\n");
        printf("///        3- LISTA DE EVENTOS               ///\n");
        printf("///        0- VOLTAR                         ///\n");
        printf("///                                          ///\n");
        printf("////////////////////////////////////////////////\n");

        printf("Digite o número de uma opção: ");
        scanf("%i", &opc);

        if (opc == 1) {
            td_advogados();
        } else if(opc == 2){
            td_clientes();
        }else if (opc == 3){
            printf("função em desenvolvimento");
        }    
    }
}

void td_advogados(){
    printf("função em desenvolvimento");
}
void td_clientes(){
    printf("função em desenvolvimento");
}
void td_eventos(){
    printf("função em desenvolvimento");
}