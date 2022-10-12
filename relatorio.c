#include <stdio.h>
#include <stdlib.h>
#include "relatorio.h"

void area_relatorio(void){

    int opc;
    while ( opc!= 0){
        printf("////////////////////////////////////////////////");
        printf("///      ----- ÁREA DE RELATORIO -----       ///");
        printf("////////////////////////////////////////////////");
        printf("///                                          ///");
        printf("///        1- TODOS OS ADVOGADOS             ///");
        printf("///        2- TODOS OS CLIENTES              ///");
        printf("///        3- LISTA DE EVENTOS               ///");
        printf("///        0- VOLTAR                         ///");
        printf("////////////////////////////////////////////////");

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