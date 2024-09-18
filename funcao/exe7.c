//Crie uma função que receba dois números inteiros como parâmetros e retorne o maior deles. No programa principal, peça dois números e exiba o maior.
#include <stdio.h>

int maior(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}
int main() {
    int num1, num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    printf("O maior numero e: %d\n", maior(num1, num2));
    
    return 0;
}
