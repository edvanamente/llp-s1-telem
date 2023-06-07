#include <stdio.h>

int main() {
    FILE *arq;
    char caract;

    
    arq = fopen("arq.txt", "w");
    if (arq == NULL) {
        printf("Falha ao abrir o arquivo.");
        return 1;
    }

    printf("Digite os caracteres a serem gravados no arquivo: \n\nDigite '0' para armazenar e mostrar todos os caracteres\n");

    
    while (1) {
        scanf(" %c", &caract);
        if (caract == '0') {
            break;
        }
        fputc(caract, arq);
    }

    
    fclose(arq);

    
    arq = fopen("arq.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    printf("\nConteúdo do arquivo:\n");

    
    while ((caract = fgetc(arq)) != EOF) {
        printf("%c", caract);
    }

    
    fclose(arq);

    return 0;
}