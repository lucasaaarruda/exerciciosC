//Crie duas matrizes 3x3, preencha-as com valores fornecidos pelo usuário e, em seguida, calcule a soma das duas matrizes.
#include <stdio.h>

#define SIZE 3

int main() {
    int matrizA[SIZE][SIZE], matrizB[SIZE][SIZE], soma[SIZE][SIZE];

    printf("Digite os valores da Matriz A 3x3:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("\nDigite os valores da Matriz B 3x3:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            soma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    printf("\nResultado da soma das matrizes A e B:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
    return 0;
}
