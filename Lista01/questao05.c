#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void questao05(void){
    float salariobase;
    int dependente;
    float salariobruto;
    float salarioliquido;

    entrada05( &salariobase, &dependente);

    processamento05( &salariobase, &dependente, &salariobruto, &salarioliquido);

    saida05( &salarioliquido);
}

void entrada05( float *salarioba, int *dep){
    printf("Informe o salario inicial: R$");
    scanf("%f", salarioba);
    printf("Informe a quantidade de dependentes: ");
    scanf("%d", dep);
}

void processamento05( float *salarioba, int *dep, float *salariobru, float *salarioliq){
    *salariobru = *salarioba + (*dep * 32);
    *salarioliq = *salariobru - ((*salariobru * 27.5)/100);
}

void saida05( float resultado){
    printf("O salario liquido eh: R$%.2f", resultado);
}
