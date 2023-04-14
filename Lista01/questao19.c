#include <stdio.h>
#include <stdlib.h>
#include "questao19.h"

void questao19(void){
    int lado1;
    int lado2;
    int lado3;

    printf("Informe os 3 lados do triangulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado2 == lado3){
        printf("Equilatero!");
    }else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
        printf("Isosceles!");
    }else{
        printf("Escaleno!");
    }
}
