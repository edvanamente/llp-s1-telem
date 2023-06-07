#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *arqEntrada, *arqSaida;
    char nomeArqEntrada[60], nomeArqSaida[65];
    char caract;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArqEntrada);

    arqEntrada = fopen(nomeArqEntrada, "r");

    if (arqEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArqSaida);

    arqSaida = fopen(nomeArqSaida, "w");

    if (arqSaida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    while ((caract=fgetc(arqEntrada)) != EOF) {
        caract = tolower(caract);
        if (caract == 'a' || caract == 'e' || caract == 'i' || caract == 'o' || caract == 'u') {
            fputc('*', arqSaida);
        } else {
            fputc(caract, arqSaida);
        }
    }

    fclose(arqEntrada);
    fclose(arqSaida);

    printf("Arquivo de saída criado com sucesso.\n");

    return 0;
}
