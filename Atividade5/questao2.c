#include <stdio.h>

int main() {
    char nomeArq[100];
    int linhas = 0;
    FILE *arq;

    printf("Digite o nome do arquivo para saber quantas linhas o mesmo possui: ");
    scanf("%s", nomeArq);

    arq = fopen(nomeArq, "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (!feof(arq)) {
        char caract = fgetc(arq);
        if (caract == '\n') {
            linhas++;
        }
    }

    fclose(arq);

    printf("Esse arquivo possui %d linhas.\n", linhas);

    return 0;
}