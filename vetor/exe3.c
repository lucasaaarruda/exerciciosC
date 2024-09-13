//Maior e Menor Elemento: Faça um programa que leia 10 números inteiros e exiba o maior e o menor valor do vetor.
#include <stdio.h>

#define num 10

int main(){

    int vetor[num] = {0};
    int menor, maior;

    for(int i = 0; i < num; i++){
        printf("Digite o %d numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < num; i++){
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    for(int i = 0; i < num; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    printf("\nO MENOR valor e: %d", menor);
    printf("\nO MAIOR valor e: %d", maior);
    
    return 0;
}