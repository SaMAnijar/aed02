#include <stdio.h>
#include <stdlib.h>
#include "questao17.h"

void questao17(void){
    float produto;
    float produtov;

    printf("Informe o valor de compra do produto: ");
    scanf("%f", &produto);

    if (produto < 200){
        produtov = produto + (produto * 0.5);
        printf("Valor de venda do produto: R$%.2f.", produtov);
    }
    else{
        produtov = produto + (produto * 0.3);
        printf("Valor de venda do produto: R$%.2f.", produtov);
    }
}
