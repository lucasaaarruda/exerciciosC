//Crie um programa que receba uma nota (de 0 a 100) e, com base no intervalo da nota, utilize switch case para classificar o desempenho: por exemplo, A (90-100), B (80-89), C (70-79), etc.
#include <stdio.h>

int main(){
    int nota;

    printf("Digite um nota de 0 a 100: ");
    scanf("%d", &nota);

    if(nota < 0 || nota > 100){
        printf("Nota invalida. Por favor, digite uma nota entre 0 e 100\n");
        return 1;
    }
    switch (nota / 10){
        case 10:
        case 9:
            printf("Classificacao: A\n");
            break;
        case 8:
            printf("Classificacao: B\n");
            break;
        case 7:
            printf("Classificacao: C\n");
            break;
        case 6:
            printf("Classificacao: D\n");
            break;
    default:
        printf("Classificacao: F");
        break;
    }
    return 0;
}