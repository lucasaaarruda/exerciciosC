//Crie um programa que peça ao usuário um número inteiro e, usando while, exiba a tabuada desse número de 1 a 10.
#include <stdio.h>

int main(){
    int num;
    int i = 1;

    printf("Digite o numero que quer ver a tabuada: ");
    scanf("%d", &num);

    while (i <= 10){
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    return 0;
}