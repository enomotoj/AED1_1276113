/* --------------------------------------------------------------------------
Disciplina  : Algortimo e Estrutura de Dados 2026S1
Nome        : Julia Enomoto Aguiar
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 22/08/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Dificuldade : 
Uso de IA   : 
-------------------------------------------------------------------------- */
#include<stdio.h>
int main(){
    int i = 0, maior = 0, posicao = 0;
    int vet[100];

    printf("Digite os 100 valores inteiros desejados:\n");
    for(i = 0; i < 100 ; i ++){
        scanf("%d", &vet[i]);
        if (vet[i] > maior){
            maior = vet[i];
            posicao = i + 1;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", posicao);
    return 0;
}
