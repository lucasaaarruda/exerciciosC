//Crie um programa que leia dois números e uma operação (adição, subtração, multiplicação ou divisão) e use o switch case para calcular o resultado.
#include <stdio.h>

int main(){
    float num1, num2, result;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Escolha a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch (operacao){
        case '+':
            result = num1 + num2;
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, result);
            }else{
                printf("Divisao por 0 nao e permitida.\n");
            }
            break;
        default:
            printf("Operacao invalida. Escolha entre +, -, *, /.\n");
    }
    return 0;
}