#include <stdio.h>

int main() {
    FILE *arq;
    char nomeArq[80];
    char caract;
    int contVogais = 0;

 
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArq);

    
    arq = fopen(nomeArq, "r");

    
    if (arq == NULL) {
        printf("Falha ao abrir o arquivo.\n");
        return 1;
    }

    
    while ((caract = fgetc(arq)) != EOF) {
        
        caract = tolower(caract);

        
        if (caract == 'a' || caract== 'e' || caract == 'i' || caract == 'o' || caract == 'u') {
            contVogais++;
        }
    }

    
    fclose(arq);

    
    printf("O arquivo contém %d vogais.\n", contVogais);

    return 0;
}
