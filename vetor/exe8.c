// Elementos Únicos: Faça um programa que leia um vetor de 10 números e exiba somente os elementos que aparecem uma vez no vetor.
#include <stdio.h>
#define num 10

int main(){
    int vetor[num];
    int cont[num] = {0};
    int i;

    printf("Digite o 10 numeros:\n");
    for (i = 0; i < num; i++){
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            if(vetor[i] == vetor[j]){
                cont[i]++;
            }
        }
    }
    printf("Elementos que aparecem apenas uma vez:\n");
    for(i = 0; i < num; i++){
        if (cont[i] == 1){
            printf("%d\n", vetor[i]);
        }
    }
    return 0;
}