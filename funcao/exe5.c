//Crie uma função que receba três números reais como argumentos e retorne a média aritmética deles. No programa principal, peça ao usuário três números e exiba a média.
#include <stdio.h>

float media_aritmetica(float num1, float num2, float num3){
    return (num1 + num2 + num3) / 3;
}
int main(){
    float num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    printf("A media aritmetica dos numero e: %.2f\n", media_aritmetica(num1, num2, num3));
}