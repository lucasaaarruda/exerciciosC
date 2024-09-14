//Números Pares e Ímpares: Solicite ao usuário um número N e imprima todos os números pares e ímpares de 1 a N.
#include <stdio.h>

int main(){
    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Numeros pares de 1 a %d:\n", num);
    for(i = 0; i <= num; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
    printf("\nNumeros impares de 1 a %d:\n", num);
    for(i = 0; i <= num; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }
    
    return 0;
}