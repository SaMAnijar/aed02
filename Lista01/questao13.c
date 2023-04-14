#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "questao13.h"

void questao13(void){
    int numero;
    printf("Informe um numero para saber se ele eh divisivel por 5: ");
    scanf("%d", &numero);

    if ( numero % 5 == 0){
        printf("O numero %d eh divisivel por 5!", numero);
    }
    else{
        printf("O numero %d nao eh divisivel por 5!", numero);
    }
}
