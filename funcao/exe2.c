//Crie uma função que receba um número inteiro e retorne 1 se for par ou 0 se for ímpar. No programa principal, leia um número do usuário e use a função para verificar o resultado.
#include <stdio.h>

int ehPar(int num){
    return (num % 2 == 0) ? 1 : 0;
}
int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(ehPar(num)){
        printf("%d e PAR.\n", num);
    } else{
        printf("%d e IMPAR.\n", num);
    }
    return 0;
}