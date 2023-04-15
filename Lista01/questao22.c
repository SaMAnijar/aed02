#include <stdio.h>
#include <stdlib.h>
#include "questao22.h"

void questao22(void) {
    char municipio[50];
    int eleitores, votos, contador;

    entrada22(municipio, &eleitores, &votos);

    processamento22(&eleitores, &votos, &contador);

    saida22(contador, municipio);
}

void entrada22(char *munic, int *eleit, int *vot) {
    printf("Informe o municipio: ");
    scanf("%s", munic);
    printf("Informe a quantidade de eleitores: ");
    scanf("%d", eleit);
    printf("Informe os votos do prefeito mais votado: ");
    scanf("%d", vot);
}

void processamento22(int *eleit, int *vot, int *cont) {
    if (*eleit > 200000 && *vot < *eleit * 0.5) {
        *cont = 1;
    } else {
        *cont = 0;
    }
}

void saida22(int cont, char *munic) {
    if (cont == 1) {
        printf("Havera segundo turno na eleicao municipal em %s\n", munic);
    } else {
        printf("Nao havera segundo turno na eleicao municipal em %s\n", munic);
    }
}
