/* --------------------------------------------------------------------------
Disciplina  : Algortimo e Estrutura de Dados 2026S1
Nome        : Julia Enomoto Aguiar
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 21/09/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Dificuldade : uso de ponteiros
Uso de IA   : compilacao do código e sugestões de melhorias
-------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *vet = (int*)malloc(100 * sizeof(int));
    int i = 0, maior = 0, posicao = 0;

    //verificar se a memoria foi alocada corretamente
    if( vet == NULL){
        printf("Erro durante a alocacao da memoria:\n");
        return 1;
    }
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
    free(vet);
    return 0;
}
