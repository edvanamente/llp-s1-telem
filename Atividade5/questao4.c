#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *arq;
    char nomeArq[30];
    char caract;
    int contVogais = 0;
    int contConsoantes = 0;

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
            if (caract == 'a' || caract == 'e' || caract == 'i' || caract == 'o' || caract == 'u') {
                contVogais++;
            } else {
                contConsoantes++;
            }
        }
    }

    fclose(arq);

    printf("O arquivo possui %d vogais e %d consoantes.\n", contVogais, contConsoantes);

    return 0;
}
