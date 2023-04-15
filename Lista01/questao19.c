#include <stdio.h>
#include <stdlib.h>
#include "questao19.h"

void questao19(void){
    int lado1, lado2, lado3, contador = 0;

    entrada19( &lado1, &lado2, &lado3);

    processamento19( &lado1, &lado2, &lado3, &contador);

    saida19( contador);

}

void entrada19( int *lado1, int *lado2, int *lado3){
    printf("Informe os 3 lados do triangulo: ");
    scanf("%d %d %d", lado1, lado2, lado3);
}

void processamento19( int *lado1, int *lado2, int *lado3, int *cont){
    if (*lado1 == *lado2 && *lado2 == *lado3){
        *cont = 1;
    }else if(*lado1 == *lado2 || *lado2 == *lado3 || *lado3 == *lado1){
        *cont = 2;
    }else{
        return cont;
    }
}

void saida19(int cont){
    if (cont == 1){
        printf("Equilatero!");
    }else if(cont == 2){
        printf("Isosceles!");
    }else{
        printf("Escaleno!");
    }
}
