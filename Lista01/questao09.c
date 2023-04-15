#include <stdio.h>
#include <stdlib.h>
#include "questao09.h"

void questao09(void){
    int numero;
    int contador = 0;

    entrada09( &numero);

    processamento09( &numero, &contador);

    saida09( &numero, &contador);
}

void entrada09( int *num){
    printf("Informe um numero para saber se ele eh maior que 100: ");
    scanf("%d", num);
}

void processamento09( int *num, int *cont){
    if (*num > 100){
        *cont = 1;
    }
    else{
        return cont;
    }
}

void saida09( int *resultado, int *cont){
    if (*cont == 1){
        printf("O numero %d eh maior que 100.", *resultado);
    }else{
        printf("O numero %d nao eh maior que 100.", *resultado);
    }
}
