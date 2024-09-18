//Implemente uma função que receba uma temperatura em Celsius e a converta para Fahrenheit. No programa principal, peça a temperatura em Celsius e exiba o valor convertido.
#include <stdio.h>

float celsius_p_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}
int main() {
    float temp_celsius;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temp_celsius);
    
    printf("A temperatura em Fahrenheit e: %.2f\n", celsius_p_fahrenheit(temp_celsius));
    
    return 0;
}
