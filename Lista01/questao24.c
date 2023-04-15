#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "questao24.h"

void questao24(void) {
    int compra, pagamento, troco, nota100, nota10, nota1;
    bool validacao;

    entrada24(&compra, &pagamento);

    processamento24(&compra, &pagamento, &troco, &validacao, &nota100, &nota10, &nota1);

    saida24(validacao, nota100, nota10, nota1);
}

void entrada24(int *comp, int *pag){
    printf("Informe o valor do produto: ");
    scanf(" %d", comp);
    printf("Informe o valor de pagamento: ");
    scanf(" %d", pag);
}

void processamento24(int *comp, int *pag, int *troco, bool *val, int *not100, int *not10, int *not1){
    if (*pag > *comp){
        *troco = *pag - *comp;

        *not100 = *troco / 100;
        *troco = *troco % 100;

        *not10 = *troco / 10;
        *troco = *troco % 10;

        *not1 = *troco / 1;

        *val = true;
    }else{
        *val = false;
    }
}

void saida24(bool val, int not100, int not10, int not1){
    if(val){
        printf("Notas de 100: %d\n", not100);
        printf("Notas de 10: %d\n", not10);
        printf("Notas de 1: %d\n", not1);
    }else{
        printf("Pagamento negado!");
    }
}
