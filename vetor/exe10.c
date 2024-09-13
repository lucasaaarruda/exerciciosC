// Troca de Valores: Crie um programa que leia dois vetores de 5 elementos cada e troque os valores entre eles (o primeiro elemento do vetor 1 com o primeiro do vetor 2, e assim por diante).
#include <stdio.h>
#define num 5

int main(){
    int vetor1[num], vetor2[num];
    int i, temp;

    printf("Digite os 5 elementos do vetor 1:\n");
    for (i = 0; i < num; i++){
        scanf("%d", &vetor1[i]);
    }
    printf("Digite os 5 elementos do vetor 2:\n");
    for (i = 0; i < num; i++){
        scanf("%d", &vetor2[i]);
    }
    for (i = 0; i < num; i++){
        temp = vetor1[i];
        vetor1[i] = vetor2[i];
        vetor2[i] = temp;
    }
    printf("\nValores apos a troca:\n");

    printf("Vetor 1:\n");
    for(i = 0; i < num; i++){
        printf("%d\n", vetor1[i]);
    }
    printf("Vetor 2:\n");
    for (i = 0; i < num; i++){
        printf("%d\n", vetor2[i]);
    }
    return 0;
}