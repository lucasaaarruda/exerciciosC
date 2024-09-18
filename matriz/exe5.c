//Crie uma matriz 3x3 e preencha-a com valores fornecidos pelo usuário. Depois, exiba sua matriz transposta.
#include <stdio.h>

#define SIZE 3

int main() {
    int matriz[SIZE][SIZE];
    int transposta[SIZE][SIZE];

    printf("Digite os valores da matriz 3x3:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
    printf("\nMatriz original:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz transposta:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}
