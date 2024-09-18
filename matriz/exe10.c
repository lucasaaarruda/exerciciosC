//Crie uma matriz 3x3 e preencha-a com valores fornecidos pelo usuário. Verifique se a matriz é simétrica (isto é, se o elemento [i][j] é igual ao elemento [j][i] para todos os i e j).
#include <stdio.h>
#include <stdbool.h>

#define SIZE 3

bool verificaSimetria(int matriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    int matriz[SIZE][SIZE];

    printf("Digite os valores da Matriz 3x3:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    if (verificaSimetria(matriz)) {
        printf("\nA matriz é simétrica.\n");
    } else {
        printf("\nA matriz não é simétrica.\n");
    }
    return 0;
}
