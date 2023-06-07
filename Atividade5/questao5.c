#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    char nomeArq[45];
    char caract;
    int cont = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArq);

    printf("Digite o caractere a ser buscado: ");
    scanf(" %c", &caract);

    arq = fopen(nomeArq, "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (!feof(arq)) {
        char c = fgetc(arq);

        if (c == caract) {
            cont++;
        }
    }

    fclose(arq);

    printf("O caractere '%c' ocorre %d vezes no arquivo.\n", caract, cont);

    return 0;
}
