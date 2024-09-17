//Escreva um programa que permita ao usuário inserir números até que ele digite zero. O programa deve exibir o maior e o menor número inserido. Use while para controlar as entradas.
#include <stdio.h>

int main(){
    int num;
    int maior, menor;
    int primeiroNum = 1;

    while(1){
        printf("Digite um numero (digite 0 para sair): ");
        scanf("%d", &num);

        if(num == 0){
            break;
        }
        if (primeiroNum){
            maior = menor = num;
            primeiroNum = 0;
        } else{
            if (num > maior){
                maior = num;
            }
            if (num < menor){
                menor = num;
            }
        }
    }
    if (!primeiroNum){
        printf("\nO maior numero inserido foi: %d\n", maior);
        printf("O menor numero inserido foi: %d\n", menor);
    } else{
        printf("Nenhum numero valido foi inserido.\n");
    }
    return 0;
}