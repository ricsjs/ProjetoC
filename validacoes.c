#include <stdio.h>
#include <stdlib.h>
#include "validacoes.h"
#include <string.h>

int valida_data(int dia, int mes, int ano) { //by https://www.vivaolinux.com.br/script/Funcao-para-validacao-de-datas
    if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1900 && ano <= 2100)) //verifica se os numeros sao validos
        {
            if ((dia == 29 && mes == 2) && ((ano % 4) == 0)) //verifica se o ano e bissexto
            {
                return 1;
            }
            if (dia <= 28 && mes == 2) //verifica o mes de feveireiro
            {
                return 1;
            }
            if ((dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) //verifica os meses de 30 dias
            {
                return 1;
            }
            if ((dia <=31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes ==8 || mes == 10 || mes == 12)) //verifica os meses de 31 dias
            {
                return 1;
            }
            else
            {
                return 0;
            }
      }
       else
           {
                return 0;
           }
}

// retorna 0 se for false e 1 se for true

int lerEmail(char email[]) //by https://pt.stackoverflow.com/users/110948/rog%C3%A9rio-dec
{
  int tam=strlen(email);
  int arroba = 0, ponto = 0, antesPonto = 0, depoisPonto = 0, i;

  for (i = 0; i < tam; i++) {
    char c = email[i];
    if(c == '@') {
      if (arroba)
         break; // não pode ter uma segunda @
      arroba++;
      if (i < 3)
        break; // se @ vier antes de 3 caracteres, erro
    }
    else if (arroba) { // se já encontrou @
      if (ponto) { // se já encontrou . depois de @@
        depoisPonto++;
      }
      else if(c == '.') {
        ponto = 1;
        if (antesPonto < 3) {
          break; // se . depois de @ vier antes de 3 caracteres, erro
        }
      }
      else {
        antesPonto++;
      }
    }
  } // for

    if (i == tam && depoisPonto > 1)
        return 1;
    else
        return 0;

}

int valida_cpf(char *cpf){
    int validador = 1;
    int cpf_int[11];
    int soma_d1=0, soma_d2=0, calculo_d, tam,d=0,i=0, digitos;
    tam=strlen(cpf);

    while(d<=tam){
        if(cpf[d]!='.' && cpf[d]!='-'){
            cpf_int[i] = cpf[d]-48;
            i=i+1;
        }
        d++;
    }

//Testando cpf com todos os numeros iguais, são considerados válidos pelo calculo, mas são invalidos.
if(cpf_int[0]==0 && cpf_int[1]==0 && cpf_int[2]==0 && cpf_int[3]==0 && cpf_int[4]==0 && cpf_int[5]==0 && cpf_int[6]==0 && cpf_int[7]==0 && cpf_int[8]==0 && cpf_int[9]==0 && cpf_int[10]==0){

    printf("CPF inválido, Digite novamente: \n");
    validador=1; 
}  
else if(cpf_int[0]==1 && cpf_int[1]==1 && cpf_int[2]==1 && cpf_int[3]==1 && cpf_int[4]==1 && cpf_int[5]==1 && cpf_int[6]==1 && cpf_int[7]==1 && cpf_int[8]==1 && cpf_int[9]==1 && cpf_int[10]==1){
    printf("CPF inválido, Digite novamente: \n");
    validador=1; 
}
else if(cpf_int[0]==2 && cpf_int[1]==2 && cpf_int[2]==2 && cpf_int[3]==2 && cpf_int[4]==2 && cpf_int[5]==2 && cpf_int[6]==2 && cpf_int[7]==2 && cpf_int[8]==2 && cpf_int[9]==2 && cpf_int[10]==2){
    printf("CPF inválido, Digite novamente: \n");
    validador=1; 
}
else if(cpf_int[0]==3 && cpf_int[1]==3 && cpf_int[2]==3 && cpf_int[3]==3 && cpf_int[4]==3 && cpf_int[5]==3 && cpf_int[6]==3 && cpf_int[7]==3 && cpf_int[8]==3 && cpf_int[9]==3 && cpf_int[10]==3){
    printf("CPF inválido, Digite novamente: \n");
    validador=1; 
}   
else if(cpf_int[0]==4 && cpf_int[1]==4 && cpf_int[2]==4 && cpf_int[3]==4 && cpf_int[4]==4 && cpf_int[5]==4 && cpf_int[6]==4 && cpf_int[7]==4 && cpf_int[8]==4 && cpf_int[9]==4 && cpf_int[10]==4){
    printf("CPF inválido, Digite novamente: \n");
    validador=1; 
}

else if(cpf_int[0]==5 && cpf_int[1]==5 && cpf_int[2]==5 && cpf_int[3]==5 && cpf_int[4]==5 && cpf_int[5]==5 && cpf_int[6]==5 && cpf_int[7]==5 && cpf_int[8]==5 && cpf_int[9]==5 && cpf_int[10]==5){
    printf("CPF inválido, Digite novamente: \n");
    validador=1; 
}
else if(cpf_int[0]==6 && cpf_int[1]==6 && cpf_int[2]==6 && cpf_int[3]==6 && cpf_int[4]==6 && cpf_int[5]==6 && cpf_int[6]==6 && cpf_int[7]==6 && cpf_int[8]==6 && cpf_int[9]==6 && cpf_int[10]==6){
    printf("CPF inválido, Digite novamente: \n");
    validador=1; 
}
else if(cpf_int[0]==7 && cpf_int[1]==7 && cpf_int[2]==7 && cpf_int[3]==7 && cpf_int[4]==7 && cpf_int[5]==7 && cpf_int[6]==7 && cpf_int[7]==7 && cpf_int[8]==7 && cpf_int[9]==7 && cpf_int[10]==7){
    printf("CPF inválido, Digite novamente: \n");
    validador=1; 
}
else if(cpf_int[0]==8 && cpf_int[1]==8 && cpf_int[2]==8 && cpf_int[3]==8 && cpf_int[4]==8 && cpf_int[5]==8 && cpf_int[6]==8 && cpf_int[7]==8 && cpf_int[8]==8 && cpf_int[9]==8 && cpf_int[10]==8){
    printf("CPF inválido, Digite novamente: \n");
    validador=1; 
}
else if(cpf_int[0]==9 && cpf_int[1]==9 && cpf_int[2]==9 && cpf_int[3]==9 && cpf_int[4]==9 && cpf_int[5]==9 && cpf_int[6]==9 && cpf_int[7]==9 && cpf_int[8]==9 && cpf_int[9]==9 && cpf_int[10]==9){
    printf("CPF inválido, Digite novamente: \n");
    validador=1; 
}

else{
//calculo
    i=0;
    while(i<9){
        soma_d1 = soma_d1 +((cpf_int[i])*(10-i));
        soma_d2 = soma_d2 +((cpf_int[i])*(11-i));
        i++;
}

    // primeiro digito
    soma_d1 = (soma_d1 *10)%11;
    if(soma_d1>9){
        soma_d1=0;
    }

    // segundo digito
    soma_d2 = ((soma_d2 +(soma_d1*2)) *10)%11;
    if(soma_d2 >9){
        soma_d2=0;
    }
    //calculo dos digitos
    calculo_d =(soma_d1 * 10)+soma_d2;

    // verificar digitos
    i=cpf_int[9];
    d=cpf_int[10];

    //conferindo
    digitos = ((i)*10)+(d);

    if(calculo_d==digitos){   
        validador=1;
    }else{
        validador=0;
    }
    }
return validador;
}
