//Crie um programa que utilize while para somar todos os números pares entre 1 e 100 e exiba o resultado.
#include <stdio.h>

int main(){
    int num = 1;
    int soma = 0;

    while(num <= 100){
        if(num % 2 == 0){
            soma += num;
        }
        num++;
    }
    printf("A soma de todos os numeros pares entre 1 e 100 e: %d\n", soma);

    return 0;
}