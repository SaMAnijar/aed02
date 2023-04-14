#include <stdio.h>
#include <stdlib.h>
#include "questao10.h"

void questao10(void){
char senha[11];
printf("Digite a senha: ");
scanf("%s", senha);


for (int i = 0; i < strlen(senha); i++) {
senha[i] = toupper(senha[i]);
}

if (strcmp(senha, "LINGUAGEMC") == 0) {
printf("Senha valida!");
} else {
printf("Senha invalida!");
}

return 0;
}
