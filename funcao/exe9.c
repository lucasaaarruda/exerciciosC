//Implemente uma função que receba um número inteiro e retorne esse número invertido (ex: 123 -> 321). No programa principal, peça ao usuário um número e mostre o resultado invertido
#include <stdio.h>

int inverter_numero(int num) {
    int invertido = 0;
    
    while (num != 0) {
        int digito = num % 10;
        invertido = (invertido * 10) + digito;
        num /= 10;
    }
    return invertido;
}
int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("O numero invertido e: %d\n", inverter_numero(numero));
    
    return 0;
}
