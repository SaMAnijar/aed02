#include <stdio.h>
#include <stdlib.h>
#include "questao11.h"

void questao11(void){
    int numero;
    int contador;

    entrada11( &numero);

    processamento11( &numero, &contador);

    saida11 ( &contador);
}

void entrada11( int *num){
    printf("Informe um numero para saber se ele esta entre 100 e 500: ");
    scanf("%d", num);
}

void processamento11( int *num, int *cont){
    if (*num > 100 && *num < 500){
        *cont = 1;
    }
    else{
        *cont = 0;
    }
}

void saida11( int *cont){
    if (*cont == 1){
        printf("O numero esta entre 100 e 500.");
    }else{
        printf("O numero nao esta entre 100 e 500.");
    }
}
