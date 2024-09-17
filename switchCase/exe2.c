//Escreva um programa que leia um número de 1 a 7 e, usando switch case, imprima o dia da semana correspondente (1 para domingo, 2 para segunda-feira, etc.).
#include <stdio.h>

int main(){
    int dia;

    printf("Digite um numero entre 1 e 7 para escolher o dia da semana: ");
    scanf("%d", &dia);

    switch(dia){
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
    default:
        printf("Valor invalido. Por favor digite um numero entre 1 e 7.\n");
    }
    return 0;
}