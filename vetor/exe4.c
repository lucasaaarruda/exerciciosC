//Média de Valores: Crie um programa que leia um vetor de 8 números inteiros e calcule a média dos valores armazenados nele.

#include <stdio.h>

#define qtdValores 8

int main(){

    int vetor[qtdValores] = {0};
    float media, soma = 0;

    for(int i = 0; i < qtdValores; i++){
        printf("Digite o %d numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / qtdValores;

    printf("A MEDIA dos valores adicionados e: %.2f", media);

    return 0;
}