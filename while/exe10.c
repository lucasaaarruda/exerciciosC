//Faça um programa que leia as notas de vários alunos, parando a leitura quando uma nota negativa for inserida. Utilize while para calcular a média das notas inseridas.
#include <stdio.h>

int main(){
    float soma = 0;
    float media, nota;
    int qtd = 0;

    while (1){
        printf("Digite a nota do aluno (insira um numero negativo para sair): ");
        scanf("%f", &nota);
        
        if(nota < 0){
            break;
        }
        soma += nota;
        qtd++;
    }
    media = soma / qtd;
    printf("A media das notas e: %.2f\n", media);

    return 0;
}