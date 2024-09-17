//Crie um programa que exiba um menu com opções para o usuário. O menu deve continuar aparecendo até que o usuário escolha a opção "Sair". Use while para controlar o loop.
#include <stdio.h>

int main(){
    int escolha;

    while(escolha != 4){
        printf("--- MENU ---\n");
        printf("1 - Adicionar usuario\n");
        printf("2 - Excluir usuario\n");
        printf("3 - Editar usuario\n");
        printf("4 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);
    }
    printf("Saindo...");

    return 0;
}