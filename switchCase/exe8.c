//Faça um programa que leia um valor em metros e permita que o usuário escolha, via switch case, se quer converter o valor para centímetros, milímetros ou quilômetros.
#include <stdio.h>

int main(){
    float valor, convertido;
    int opcao;

    printf("Digite o tamanho (Metros): ");
    scanf("%f", &valor);

    printf("-- CONVERSAO --\n");
    printf("1 - Centimetros\n");
    printf("2 - Milimetros\n");
    printf("3 - Quilometros\n");
    printf("Escolha uma opcao de conversao: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            convertido = valor * 100;
            printf("O valor de %.2f convertido em CM: %.2f", valor, convertido);
            break;
        case 2:
            convertido = valor * 1000;
            printf("O valor de %.2f convertido em MM: %.2f", valor, convertido);
            break;
        case 3:
            convertido = valor / 1000;
            printf("O valor de %.2f convertido em KM: %.2f", valor, convertido);
            break;
        default:
            printf("Valor Invalido. Escolha uma das 3 opcoes.");
            break;
    }
    return 0;
}