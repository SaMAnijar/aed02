#include <stdio.h>
#include <stdlib.h>
#include "questao15.h"

void questao15(void){
    int numero1, numero2;
    printf("Informe dois numero diferentes para saber qual eh maior: ");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 > numero2){
        printf("O numero %d eh maior que o numero %d.", numero1, numero2);
    }
    else{
        printf("O numero %d eh maior que o numero %d.", numero2, numero1);
    }
}
