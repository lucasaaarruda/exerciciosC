//Contar Dígitos em um Número: Peça ao usuário para inserir um número e conte quantos dígitos esse número possui usando um loop for.
#include <stdio.h>

int main(){
    
    int num, cont = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    for(int n = num; n != 0; n /= 10){
        cont++;
    }
    printf("O numero %d tem %d digito(s).\n", num, cont);

    return 0;
}