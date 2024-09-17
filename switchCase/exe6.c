//Crie um programa com um menu que exibe cores (vermelho, azul, verde, etc.) e, usando switch case, peça ao usuário para selecionar uma cor e imprima a cor escolhida.
#include <stdio.h>

int main(){
    int opcao;

    printf("--- CORES ---\n");
    printf("1 - Vermelho\n");
    printf("2 - Azul\n");
    printf("3 - Verde\n");
    printf("Digite a cor escolhida: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Vermelho...");
            break;
        case 2:
            printf("Azul...");
            break;
        case 3:
            printf("Verde...");
            break;
        default:
            printf("Opcao invalida. escolha entre uma das 3 cores.");
    }
    return 0;
}