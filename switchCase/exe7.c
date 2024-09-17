//Escreva um programa que receba a idade de uma pessoa e, com base na faixa etária, use switch case para classificá-la como criança, adolescente, adulto ou idoso.
#include <stdio.h>

int main(){
    int idade;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    switch(idade){
        case 0 ... 10:
            printf("Crianca.\n");
            break;
        case 11 ... 17:
            printf("Adolescente.\n");
            break;
        case 18 ... 59:
            printf("Adulto.\n");
            break;
        default:
            printf("Idoso.\n");
            break;
    }
    return 0;
}