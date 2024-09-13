// Cópia de Vetor: Crie um programa que leia 5 números e copie-os para um segundo vetor, imprimindo os elementos dos dois vetores.
#include <stdio.h>

#define num 5

int main(){
    int original[num] = {0};
    int copiado[num] = {0};
    int i;

    for(i = 0; i < num; i++){
        printf("Digite o %d numero inteiro: ", i+1);
        scanf("%d", &original[i]);
    }
    for(i = 0; i < num; i++){
        copiado[i] = original[i];
    }
    
    printf("Vetor original:\n");
    for(i = 0; i < num; i++){
        printf("%d\n", original[i]);
    }

    printf("Vetor copiado:\n");
    for(i = 0; i < num; i++){
        printf("%d\n", copiado[i]);
    }
    return 0;
}