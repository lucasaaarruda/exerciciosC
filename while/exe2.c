//Escreva um programa que peça ao usuário para inserir números até que ele digite um número negativo. O programa deve exibir a soma de todos os números positivos digitados.
#include <stdio.h>

int main(){
    int num, soma = 0;

    do{
        printf("Digite um numero (Para sair digite um numero negativo): ");
        scanf("%d", &num);

        if(num >= 0){
            soma += num;
        }
    }while(num >= 0);
    printf("A soma desses numeros e: %d", soma);
    return 0;
}