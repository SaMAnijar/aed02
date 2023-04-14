#include <stdio.h>
#include <stdlib.h>
#include "questao20.h"

void questao20(void){
    int numero1;
    int numero2;
    int numero3;

    printf("Informe os 3 numeros para saber qual eh o maior: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    if (numero1 > numero2 && numero1 > numero3){
        printf("Numero maior: %d.", numero1);
    }else if(numero2 > numero1 && numero2 > numero3){
        printf("Numero maior: %d.", numero2);
    }else if(numero1 == numero2 && numero2 == numero3){
        printf("Numero identicos");
    }else{
    printf("Numero maior: %d.", numero3);
    }
}
