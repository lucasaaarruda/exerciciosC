//Criação de Vetor: Crie um programa que declare um vetor de 10 inteiros, preencha-o com números fornecidos pelo usuário e imprima esses números na ordem em que foram inseridos.

#include <stdio.h>

#define qtdValor 10

int main(){

    int vetor[qtdValor] = {0};

    for(int i = 0; i < qtdValor; i++){
        printf("Digite o %d valor inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\n");

    for (int i = 0; i < qtdValor; i++){
        printf("O %d valor e: %d\n", i + 1, vetor[i]);
    }

    return 0;
}