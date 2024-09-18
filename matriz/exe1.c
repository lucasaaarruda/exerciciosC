//Crie uma matriz 3x3 e preencha-a com valores fornecidos pelo usuário. Exiba a matriz em formato de tabela.
#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    printf("Digite os valores para a matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nMatriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
