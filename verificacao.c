#include <stdio.h>
#include <stdlib.h>
#include "verificacao.h"

int validar_data(void){

    int dataValida(int, int, int);
    int bissexto(int);

    int teste(); 
    int dia, mes, ano, dataOk;

    printf("Validação de datas\n");
    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);

    dataOk = dataValida(dia, mes, ano);

    if (dataOk) {
        printf("Data Correta!\n");
    } else {
        getchar();
        printf("Data inválida, precione ENTER para tentar novamente!...\n");
        getchar();
    }

    return 0;
    }

    int bissexto(int aa) {
    if ((aa % 4 == 0) && (aa % 100 != 0)) {
        return 1;
    } else if (aa % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
    }

    int dataValida(int dd, int mm, int aa) {
    int maiorDia;
    if (aa < 0 || mm < 1 || mm > 12 || dd < 1) {
        return 0;
    }
    if (mm == 2) {
        if (bissexto(aa)) {
        maiorDia = 29;
        } else {
        maiorDia = 28;
        }
    } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
        maiorDia = 30;
    } else {
        maiorDia = 31;
    }
    if (dd > maiorDia) {
        return 0;
    }
    return 1;
}
