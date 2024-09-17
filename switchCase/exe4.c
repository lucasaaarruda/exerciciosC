//Faça um programa que receba um valor em reais e peça ao usuário para escolher entre conversão para dólar, euro ou libra. Utilize switch case para fazer a conversão.
#include <stdio.h>

int main(){
    int opcao;
    float reais, convertido;
    
    float dolar = 5.25;
    float euro = 5.75;
    float libra = 6.80;

    printf("Digite o valor em reais (R$): ");
    scanf("%f", &reais);

    printf("Escolha a conversao (1 - Dolar | 2 - Euro | 3 - Libra):\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            convertido = reais / dolar;
            printf("Conversao em Dolar: %.2f\n", convertido);
            break;
        case 2:
            convertido = reais / euro;
            printf("Conversao em Euro: %.2f\n", convertido);
            break;
        case 3:
            convertido = reais / libra;
            printf("Conversao em Libra: %.2f\n", convertido);
            break;
        default:
            printf("Conversao invalida. Escolha entre 1, 2 e 3.\n");
    }
    return 0;
}