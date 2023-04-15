#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "questao17.h"

void questao17(void){
    float produto;
    float produtov;
    bool validacao;

    entrada17( &produto);

    processamento17( &produto, &produtov, &validacao);

    saida17(&produtov, validacao);
}

void entrada17(float *produto){
    printf("Informe o valor de compra do produto: ");
    scanf("%f", produto);
}

void processamento17(float *prod, float *prodv, bool *val){
    if (prod < 200){
        *prodv = *prod + (*prod * 0.5);
        *val = true;
    }
    else{
        *prodv = *prod + (*prod * 0.3);
        *val = false;
    }
}

void saida17(float *prodv, bool val){
    if (val) {
    printf("Valor de venda do produto: R$%.2f.", *prodv);
    }else {
    printf("Valor de venda do produto: R$%.2f.", *prodv);
    }
}
