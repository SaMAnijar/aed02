#include <stdio.h>
#include <stdlib.h>
#include "questao14.h"

void questao14(void){
    int numero;
    printf("Informe um numero para saber se ele eh par ou impar: ");
    scanf("%d", &numero);

    if ( numero % 2 == 0){
        printf("O numero %d eh par!", numero);
    }
    else{
        printf("O numero %d nao eh impar", numero);
    }
}
