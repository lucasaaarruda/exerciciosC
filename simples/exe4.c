//Fatorial de um Número: Peça ao usuário um número inteiro N e calcule o fatorial de N usando um loop for.
#include <stdio.h>

int main(){
    int num, fat = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        fat *= i;
    }
    printf("O fatorial de %d e: %d", num, fat);

    return 0;
}