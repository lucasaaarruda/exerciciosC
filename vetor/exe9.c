// Produto dos Elementos: Desenvolva um programa que leia um vetor de 5 números inteiros e calcule o produto (multiplicação) de todos os elementos.
#include <stdio.h>
#define num 5

int main(){
    int vetor[num];
    int i, produto = 1;

    printf("Digite 5 numeros inteiros:\n");
    for(i = 0; i < num; i++){
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < num; i++){
        produto *= vetor[i];
    }
    printf("O produto de todos os elementos e: %.2d", produto);

    return 0;
}