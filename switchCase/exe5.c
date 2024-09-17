//Implemente um programa que calcule o fatorial de um número de 1 a 10, usando switch case para diferentes números e uma função que calcula o fatorial.
#include <stdio.h>

int calFatorial(int n){
    int fatorial = 1;

    for (int i = 1; i < n; i++){
        fatorial *= i;
    }
    return fatorial;
}
int main(){
    int num, resultado;

    printf("Digite um numero entre 1 e 10 para calcular o fatorial: ");
    scanf("%d", &num);

    switch (num){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            resultado = calFatorial(num);
            printf("O fatorial de %d e: %d\n", num, resultado);
            break;
        default:
            printf("Numero invalido. Digite um numero entre 1 e 10");
    }
    return 0;
}
