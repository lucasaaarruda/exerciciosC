//Pirâmide de Asteriscos: Escreva um programa que desenha uma pirâmide de asteriscos com N linhas, onde N é fornecido pelo usuário. Exemplo para N = 5:
//     *
//    ***
//   *****
//  *******
// *********
#include <stdio.h>

int main(){

    int num, j, i;
    
    printf("Digite a quantidade de linhas da piramide: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        for(j = 1; j <= num - i; j++){
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
