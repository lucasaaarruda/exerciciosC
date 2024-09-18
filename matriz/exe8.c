//Crie uma matriz 3x3, preencha-a com valores fornecidos pelo usuário e determine o maior e o menor elemento da matriz.
#include <stdio.h>

#define SIZE 3

int main() {
    int matriz[SIZE][SIZE];
    int maior, menor;

    printf("Digite os valores da Matriz 3x3:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 0) {
                maior = menor = matriz[i][j];
            }
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }
    printf("\nO maior elemento da matriz é: %d\n", maior);
    printf("O menor elemento da matriz é: %d\n", menor);
    
    return 0;
}
