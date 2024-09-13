//Inverter Ordem: Desenvolva um programa que leia 6 números inteiros em um vetor e os exiba na ordem inversa.
#include <stdio.h>

#define qtdValores 6

int main(){

    int vetor[qtdValores];
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    for(int i = 0; i < qtdValores; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("\nVetor invertido:\n");

    for(int i = tamanho - 1; i >= 0; i--){
        printf("Valor %d: %d\n", i + 1, vetor[i]);
    }
    return 0;
}
