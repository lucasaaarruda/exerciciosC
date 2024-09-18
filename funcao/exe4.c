//Escreva uma função que receba um número inteiro e retorne 1 se o número for primo, ou 0 caso contrário. No programa principal, peça ao usuário um número e use a função para verificar se é primo.
#include <stdio.h>

int ePrimo(int num){
    if (num <= 1){
        return 0;
    }
    for(int i = 2; i <= num / 2; i++){
        if(num % i == 0){
            return 0;
        }   
    }
    return 1;
}
int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(ePrimo(num)){
        printf("%d e PRIMO.\n", num);
    } else{
        printf("%d NAO e primo.\n", num);
    }
    return 0;
}