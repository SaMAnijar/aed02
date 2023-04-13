#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void questao01(void){
    int numero01;
    int numero02;
    int numero03;
    int resultado;

    entrada01(&numero01, &numero02, &numero03);

    processamento01(&numero01, &numero02, &numero03, &resultado);

    saida01(resultado);
}

void entrada01(int *num01, int *num02, int *num03){
    printf("Informe o primeiro numero: ");
    scanf("%d", num01);
    printf("Informe o segundo numero: ");
    scanf("%d", num02);
    printf("Informe o terceiro numero: ");
    scanf("%d", num03);
}

void processamento01(int *num01, int *num02, int *num03, int *soma){
    *soma = *num01 + *num02 + *num03;
}

void saida01(int soma){
    printf("Resultado: %d\n", soma);
}
