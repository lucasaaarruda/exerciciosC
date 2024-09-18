//Implemente uma função que receba um número inteiro positivo e retorne o fatorial desse número. No programa principal, peça ao usuário um número e mostre o resultado da função.
#include <stdio.h>

int fatorial(int num){
    int result = 1;

    for(int i = 1; i <= num; i++){
       result *= i;
    }
    return result;
}
int main(){
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    printf("O fatorial de %d e: %d.\n", num, fatorial(num));

    return 0;
}
