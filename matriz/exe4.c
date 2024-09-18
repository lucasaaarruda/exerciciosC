//Crie uma função que verifica se uma matriz 3x3 é uma matriz identidade (matriz com 1s na diagonal principal e 0s no restante).
#include <stdio.h>
#include <stdbool.h>

#define SIZE 3

bool verificaMatrizIdentidade(int matriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i == j && matriz[i][j] != 1) {
                return false;
            }
            if (i != j && matriz[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    int matriz[SIZE][SIZE] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    if (verificaMatrizIdentidade(matriz)) {
        printf("A matriz é uma matriz identidade.\n");
    } else {
        printf("A matriz não é uma matriz identidade.\n");
    }
    return 0;
}
