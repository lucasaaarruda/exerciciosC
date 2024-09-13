//Contagem de Números Pares: Escreva um programa que leia um vetor de 10 números e conte quantos deles são pares.
#include <stdio.h>

#define qtdNum 10

int main(){
    int vetor[qtdNum];
    int qtdPar = 0;

    for(int i = 0; i < qtdNum; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0){
            qtdPar += 1;
        }
    }
    printf("\nA quantidade de numeros pares e %d", qtdPar);

    return 0;
}