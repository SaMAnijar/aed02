#include <stdio.h>
#include <stdlib.h>
#include "questao09.h"

void questao09(void){
    int numero;

    entrada09( &numero);

    if (numero > 100){
        printf("O numero %d eh maior que 100!", numero);
    }
    else{
        printf("O numero %d nao eh maior que 100", numero);
    }
}

void entrada09( int *num){
    printf("Informe um numero para saber se ele eh maior que 100: ");
    scanf("%d", num);
}
