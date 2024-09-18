//Crie uma matriz 3x3 e preencha-a com valores fornecidos pelo usuário. Calcule e exiba a soma dos elementos de cada linha e de cada coluna separadamente.
#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int somaLinha[3] = {0};
    int somaColuna[3] = {0};

    printf("Digite os valores para a matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            somaLinha[i] += matriz[i][j];
            somaColuna[j] += matriz[i][j];
        }
    }
    printf("\nSoma dos elementos de cada linha:\n");
    for (i = 0; i < 3; i++) {
        printf("Linha %d: %d\n", i + 1, somaLinha[i]);
    }
    printf("\nSoma dos elementos de cada coluna:\n");
    for (j = 0; j < 3; j++) {
        printf("Coluna %d: %d\n", j + 1, somaColuna[j]);
    }
    return 0;
}
