//Crie uma função que receba um número inteiro como argumento e retorne o quadrado desse número. Teste a função no programa principal.
#include <stdio.h>

int quadrado(int num){
    return num * num;
}

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("O quadrado de %d e %d.\n", num, quadrado(num));

    return 0;
}