//Soma de Números de 1 a N: Solicite ao usuário um número inteiro N e calcule a soma de todos os números de 1 a N.
#include <stdio.h>

int main(){
    int num, i, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        soma += i;
    }
    printf("A soma de todos os numeros de 1 ate %d e:\n%d", num, soma);

    return 0;
}