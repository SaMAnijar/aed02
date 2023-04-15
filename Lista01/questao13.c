#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "questao13.h"

void questao13(void){
    int numero;
    int contador;

    entrada13( &numero);

    processamento13( &numero, &contador);

    saida13( &contador, &numero);
}

void entrada13( int *num){
    printf("Informe um numero para saber se ele eh divisivel por 5: ");
    scanf("%d", num);
}

void processamento13( int *num, int *cont){
    if ( *num % 5 == 0){
        *cont = 1;
    }
    else{
        *cont = 0;
    }
}

void saida13(int *cont, int *num){
    if( *cont == 1){
        printf("O numero %d eh divisivel por 5!", *num);
    }else{
        printf("O numero %d nao eh divisivel por 5!", *num);
    }
}
