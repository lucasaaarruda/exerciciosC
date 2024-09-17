//Faça um programa que leia uma string e ofereça, através de um menu switch case, operações como: contar o número de caracteres, inverter a string, ou convertê-la para maiúsculas.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void inverterString(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    char temp;

    while (inicio < fim) {
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}
void converterParaMaiusculas(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}
int main() {
    char str[100];
    int opcao;

    printf("Digite uma string (max 99 caracteres): ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("\nEscolha uma operação:\n");
    printf("1 - Contar o número de caracteres\n");
    printf("2 - Inverter a string\n");
    printf("3 - Converter para maiúsculas\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    while (getchar() != '\n');

    switch(opcao) {
        case 1:
            printf("Número de caracteres: %lu\n", strlen(str));
            break;
        case 2:
            inverterString(str);
            printf("String invertida: %s\n", str);
            break;
        case 3:
            converterParaMaiusculas(str);
            printf("String em maiúsculas: %s\n", str);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    return 0;
}
