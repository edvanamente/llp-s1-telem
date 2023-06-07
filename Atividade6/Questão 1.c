#include <stdio.h>
#include <stdlib.h>

int** criarMatriz(int linhas, int colunas) {
    int** matriz = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }
    return matriz;
}

void inicializarMatriz(int** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = i + j;
        }
    }
}

void calcularMatrizSoma(int** matrizA, int** matrizB, int** matrizC, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizA[i][j] = matrizB[i][j] + matrizC[i][j];
        }
    }
}

void mostrarMatriz(int** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas = 3;
    int colunas = 3;

    int** matrizA = criarMatriz(linhas, colunas);
    int** matrizB = criarMatriz(linhas, colunas);
    int** matrizC = criarMatriz(linhas, colunas);

    inicializarMatriz(matrizB, linhas, colunas);
    inicializarMatriz(matrizC, linhas, colunas);

    calcularMatrizSoma(matrizA, matrizB, matrizC, linhas, colunas);

    printf("Matriz A:\n");
    mostrarMatriz(matrizA, linhas, colunas);

    printf("\nMatriz B:\n");
    mostrarMatriz(matrizB, linhas, colunas);

    printf("\nMatriz C:\n");
    mostrarMatriz(matrizC, linhas, colunas);

    
    for (int i = 0; i < linhas; i++) {
        free(matrizA[i]);
        free(matrizB[i]);
        free(matrizC[i]);
    }
    free(matrizA);
    free(matrizB);
    free(matrizC);

    return 0;
}
