//Escreva uma função que receba dois números inteiros e retorne o mínimo múltiplo comum (MMC) entre eles. Teste a função no programa principal.
#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
    int num1, num2;
    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    
    printf("O Minimo Multiplo Comum (MMC) de %d e %d eh %d.\n", num1, num2, mmc(num1, num2));
    
    return 0;
}
