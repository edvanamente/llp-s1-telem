#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUMLETRASALFABETO 26

int main() {
    FILE *arq;
    char nomeArq[1];
    int cont[NUMLETRASALFABETO] = {0};
    char caract;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArq);

    arq = fopen(nomeArq, "r");

    if (arq == NULL) {
        printf("Falha ao abrir o arquivo.\n");
        return 1;
    }

    while ((caract = fgetc(arq)) != EOF) {
        caract = tolower(caract);
        if (isalpha(caract)) {
            cont[caract - 'a']++;
        }
    }

   printf (" Quantidade de letras  do alfabeto no arquivo:\n");
    for (int i = 0; i < NUMLETRASALFABETO; i++) {
        char letra = i + 'a';
        printf("%c: %d\n", letra, cont[i]);
    }

    return 0;
}