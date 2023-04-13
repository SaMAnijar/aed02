#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"

void questao02(void){
    float numero01;
    float numero02;
    float numero03;
    float numero04;
    float resultado;

    entrada02(&numero01, &numero02, &numero03, &numero04);

    processamento02(&numero01, &numero02, &numero03, &numero04, &resultado);

    saida02(&resultado);
}

void entrada02(float *num01, float *num02, float *num03, float *num04){
    printf("Informe o primeiro numero: ");
    scanf("%f", num01);
    printf("Informe o segundo numero: ");
    scanf("%f", num02);
    printf("Informe o terceiro numero: ");
    scanf("%f", num03);
    printf("Informe o quarto numero: ");
    scanf("%f", num04);
}

void processamento02(float *num01, float *num02, float *num03, float *num04, float *media){
    *media = (*num01 + *num02 + *num03 + *num04)/4;
}

void saida02(float media){
    printf("Resultado da media: %.2f\n", media);
}
