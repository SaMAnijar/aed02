#include <stdio.h>
#include <stdlib.h>
#include "questao20.h"

void questao20(void){
    int numero1, numero2, numero3, contador = 0;

    entrada20( &numero1, &numero2, &numero3);

    processamento20( &numero1, &numero2, &numero3, &contador);

    saida20( numero1, numero2, numero3, contador);
}

void entrada20(int *numero1, int *numero2, int *numero3){
    printf("Informe os 3 numeros para saber qual eh o maior: ");
    scanf("%d %d %d", numero1, numero2, numero3);
}

void processamento20(int *numero1, int *numero2, int *numero3, int *cont){
    if (*numero1 > *numero2 && *numero1 > *numero3){
        *cont = 1;
    }else if(*numero2 > *numero1 && *numero2 > *numero3){
        *cont = 2;
    }else if(*numero1 == *numero2 && *numero2 == *numero3){
        *cont = 3;
    }else{
        return cont;
    }
}

void saida20(int numero1, int numero2, int numero3, int cont){
    if (cont == 1){
        printf("Numero maior: %d.", numero1);
    }else if(cont == 2){
        printf("Numero maior: %d.", numero2);
    }else if(cont == 3){
        printf("Numero identicos");
    }else{
    printf("Numero maior: %d.", numero3);
    }
}
