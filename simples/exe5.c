// Série de Fibonacci: Gere os primeiros N números da série de Fibonacci, onde N é fornecido pelo usuário.
#include <stdio.h>

int main(){
    int num;
    int primeiro = 1, segundo = 1, prox;

    printf("Digite quantos numeros da serie de Fibonacci deseja ver: ");
    scanf("%d", &num);

    printf("Os primeiros %d da serie de Fibonacci sao:\n", num);
    for(int i = 1; i <= num; i++){
        if(i == 1){
            printf("%d", primeiro);
            continue;
        }
        if (i == 2){
            printf("%d", segundo);
            continue;
        }
        prox = primeiro + segundo;
        primeiro = segundo;
        segundo = prox;
        printf("%d", prox);        
    }
    printf("\n");
    return 0;
}