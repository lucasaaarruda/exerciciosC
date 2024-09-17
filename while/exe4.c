//Escreva um programa que leia um número inteiro positivo e, utilizando while, conte quantos dígitos esse número possui.
#include <stdio.h>

int main() {
    int numero, digitos = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, insira um número positivo.\n");
        return 1;
    }
    while (numero > 0) {
        numero /= 10;
        digitos++;
    }
    printf("O número possui %d dígitos.\n", digitos);

    return 0;
}
