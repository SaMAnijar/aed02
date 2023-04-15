#include <stdio.h>
#include <stdlib.h>
#include "questao10.h"

void questao10(void){
    char senha[11];

    entrada10( &senha);

    processamento10( &senha);

    saida10( &senha);
}

void entrada10(char *sen){
    printf("Digite a senha: ");
    scanf("%s", sen);
}

void processamento10(char *sen){
    for (int i = 0; i < strlen(sen); i++) {
    sen[i] = toupper(sen[i]);
    }
}

void saida10(char *sen){
    if (strcmp(sen, "LINGUAGEMC") == 0) {
    printf("Senha valida!");
    }else {
    printf("Senha invalida!");
    }
}
