//Crie duas matrizes 2x2 e preencha-as com valores fornecidos pelo usuário. Implemente a multiplicação dessas duas matrizes e exiba o resultado.
#include <stdio.h>

#define SIZE 2

int main() {
    int matrizA[SIZE][SIZE], matrizB[SIZE][SIZE], resultado[SIZE][SIZE];

    printf("Digite os valores da Matriz A 2x2:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("\nDigite os valores da Matriz B 2x2:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    printf("\nResultado da multiplicação das matrizes A e B:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
    return 0;
}
