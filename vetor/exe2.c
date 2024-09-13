//Soma de Elementos: Escreva um programa que leia 5 números inteiros de um vetor e calcule a soma de todos os elementos.

#include <stdio.h>

#define num 5

int main(){

    int vetor[num] = {0};
    float soma;

    for(int i = 0; i < num; i++){
        printf("Digite o %d numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    printf("\nA soma de todos os numeros digitados e: %.1f", soma);

    return 0;
}