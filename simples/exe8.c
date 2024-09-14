//Números Primos: Escreva um programa que encontre e imprima todos os números primos entre 1 e N, onde N é fornecido pelo usuário.
#include <stdio.h>

int ehPrimo(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);

    printf("Numeros primos entre 1 e %d:\n", N);
    for (int i = 1; i <= N; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
