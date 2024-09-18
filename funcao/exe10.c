//Crie uma função que receba dois números inteiros, a base e o expoente, e retorne o resultado da base elevada ao expoente.
//No programa principal, peça ao usuário os valores da base e do expoente e exiba o resultado.
#include <stdio.h>

int potencia(int base, int expoente) {
    int result = 1;
    
    for (int i = 0; i < expoente; i++) {
        result *= base;
    }   
    return result;
}
int main() {
    int base, expoente;
    
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    
    printf("%d elevado a %d eh %d.\n", base, expoente, potencia(base, expoente));
    
    return 0;
}
