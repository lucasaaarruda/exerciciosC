//Crie uma matriz 4x4 e peça ao usuário para preenchê-la. Calcule e exiba a soma de todos os elementos da matriz.
#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int soma = 0;

    printf("Digite os valores para a matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            soma += matriz[i][j];
        }
    }
    printf("\nSoma de todos os elementos da matriz: %d\n", soma);

    return 0;
}
