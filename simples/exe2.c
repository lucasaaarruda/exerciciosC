//Tabuada: Escreva um programa que receba um número inteiro do usuário e imprima a tabuada desse número (de 1 a 10).
#include <stdio.h>

int main(){
    int i, num;

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &num);

    for(i = 0; i < 11; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}