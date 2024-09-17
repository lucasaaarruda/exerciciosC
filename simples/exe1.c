// Imprimir Números de 1 a 100: Escreva um programa que imprime todos os números de 1 a 100 usando um loop for.
#include <stdio.h>

int main(){
    int i, count = 100;

    printf("Todos os numeros de 1 a 100:\n");
    for(i = 0; i < count; i++){
        printf("%d\n", i + 1);
    }
    return 0;
}
