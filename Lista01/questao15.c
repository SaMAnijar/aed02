#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "questao15.h"

void questao15(void){
    int numero1, numero2;
    bool validacao;

    entrada15( &numero1, &numero2);

    processamento15( &numero1, &numero2, &validacao);

    saida15( numero1, numero2, validacao);
}

void entrada15(int *num, int *num2){
    printf("Informe dois numero diferentes para saber qual eh maior: ");
    scanf("%d %d", num, num2);
}

void processamento15( int *num, int *num2, bool *val){
    if (*num > *num2){
        *val = true;
    }else{
        *val = false;
    }
}

void saida15(int num, int num2, bool val){
    if ( val ){
        printf("O numero %d eh maior que o numero %d.", num, num2);
    }else{
        printf("O numero %d eh maior que o numero %d.", num2, num);
    }
}
