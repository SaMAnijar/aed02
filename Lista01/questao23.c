#include <stdio.h>
#include <stdlib.h>
#include "questao23.h"

void questao23(void) {
    int opcao;
    char carro;
    float quilometro, gasolina;

    entrada23(&quilometro, &carro);

    processamento23(&quilometro, &carro, &opcao, &gasolina);

    saida23(&quilometro, carro, opcao, &gasolina);
}

void entrada23(int *km, char *tcarro) {
    printf("Informe o percuso em quilometros: ");
    scanf("%f", km);
    printf("Informe o tipo do carro sendo (A, B ou C): ");
    scanf(" %c", tcarro);
}

void processamento23(float *km, char *tcarro, int *op, float *gasosa) {
    if (*tcarro == 'A') {
        *gasosa = *km / 8;
        *op = 1;
    } else if (*tcarro == 'B') {
        *gasosa = *km / 9;
        *op = 2;
    } else if (*tcarro == 'C') {
        *gasosa = *km / 12;
        *op = 3;
    } else {
        *op = 0;
    }
}

void saida23(float *km, char tcarro, int op, float *gasosa) {
    if (op == 1) {
        printf("O tipo do carro %c com o percurso de %.1fkm consome %.1fL de gasolina!", tcarro, *km, *gasosa);
    } else if (op == 2) {
        printf("O tipo do carro %c com o percurso de %.1fkm consome %.1fL de gasolina!", tcarro, *km, *gasosa);
    } else if (op == 3) {
        printf("O tipo do carro %c com o percurso de %.1fkm consome %.1fL de gasolina!", tcarro, *km, *gasosa);
    } else {
        printf("O tipo do carro eh invalido!");
    }
}
