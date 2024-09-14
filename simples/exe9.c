//Inverter um Número: Receba um número inteiro do usuário e imprima o número invertido. Por exemplo, se o usuário inserir 1234, o programa deve imprimir 4321.
#include <stdio.h>

int main(){
    int num, numInvertido = 0, resto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while(num != 0){
        resto = num % 10;
        numInvertido = numInvertido * 10 + resto;
        num = num / 10;
    }
    printf("Numero invertido: %d\n", numInvertido);

    return 0;
}