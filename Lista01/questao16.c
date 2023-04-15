#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "questao16.h"

void questao16(void){
    float salariobruto;
    float salarioliquido;
    bool validacao;

    entrada16( &salariobruto);

    processamento16( &salariobruto, &salarioliquido, &validacao);

    saida16( &salarioliquido, validacao);
}

void entrada16( float *salariob){
    printf("Informe o salario bruto para calcular o salario liquido: ");
    scanf("%f", salariob);
}

void processamento16( float *salariob, float *salarioliq, bool *val){
    if (*salariob < 2000){
        *salarioliq = *salariob - (*salariob * 0.1);
        *val = true;
    }else{
        *salarioliq = *salariob - (*salariob * 0.2);
        *val = false;
    }
}

void saida16( float *salarioliq, bool val){
    if(val){
        printf("O salario liquido eh: R$%.2f.", *salarioliq);
    }else{
        printf("O salario liquido eh: R$%.2f.", *salarioliq);
    }
}
