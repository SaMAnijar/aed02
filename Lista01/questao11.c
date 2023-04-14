#include <stdio.h>
#include <stdlib.h>
#include "questao11.h"

void questao11(void){
    int numero;
    printf("Informe um numero para saber se ele esta entre 100 e 500: ");
    scanf("%d", &numero);

    if (numero > 100 && numero < 500){
        printf("O numero esta entre 100 e 500!");
    }
    else{
        printf("O numero nao esta entre 100 e 500.");
    }
}
