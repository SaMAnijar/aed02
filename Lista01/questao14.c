#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "questao14.h"

void questao14(void){
    int numero;
    bool validacao;

    entrada14( &numero);

    processamento14( &numero, &validacao);

    saida14( numero, validacao);
}

void entrada14(int *num){
    printf("Informe um numero para saber se ele eh par ou impar: ");
    scanf("%d", num);
}

void processamento14( int *num, bool *val){
    if ( *num % 2 == 0){
        *val = true;
    }else{
        *val = false;
    }
}

void saida14(int num, bool val){
    if ( val ){
        printf("O numero %d eh par!", num);
    }else{
        printf("O numero %d eh impar", num);
    }
}
