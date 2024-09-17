//Crie um programa que leia três notas de um aluno e, através de um switch case, ofereça diferentes opções de cálculo: média aritmética, média ponderada, ou maior nota.
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    int opcao;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("\nEscolha uma opcao de calculo:\n");
    printf("1 - Media Aritmetica\n");
    printf("2 - Media Ponderada\n");
    printf("3 - Maior Nota\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            media = (nota1 + nota2 + nota3) / 3;
            printf("Media Aritmetica: %.1f\n", media);
            break;
        case 2:
            media = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10;
            printf("Media Ponderada: %.1f\n", media);
            break;
        case 3:
            if (nota1 >= nota2 && nota1 >= nota3){
                printf("Maior nota: %.1f\n", nota1);
            } else if (nota2 >= nota1 && nota2 >= nota3){
                printf("Maior nota: %.1f\n", nota2);
            } else {
                printf("Maior nota: %.1f\n", nota3);
            }
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }
    return 0;
}