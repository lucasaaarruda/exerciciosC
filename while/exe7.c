//Escreva um programa que leia um número inteiro positivo e use while para calcular o fatorial desse número.
#include <stdio.h>

int main(){
    int num;
    int fat = 1;
    int cont = 1;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    while (cont <= num){
        fat *= cont;
        cont++;
    }
    printf("O fatorial de %d e: %d\n", num, fat);

    return 0;
}