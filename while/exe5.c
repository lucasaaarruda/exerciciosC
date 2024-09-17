//Faça um programa que leia um número inteiro e utilize while para calcular a soma dos dígitos desse número.
#include <stdio.h>

int main() {
    int numero, soma = 0, digito;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero;
    }
    while (numero > 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }
    printf("A soma dos digitos e: %d\n", soma);

    return 0;
}
