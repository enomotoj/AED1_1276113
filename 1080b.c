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
#include <stdio.h>
 
int main() {
    int vet[100];
    int *pon = &vet[0];
    for (int i = 0 ; i< 100; i++){
        scanf("%d", &vet[i]);
        if(vet[i]> *pon){
            pon = &vet[i];
        }
    }
    printf("%d\n", *pon);
    printf("%d\n", (pon- vet)+1);
    return 0;
}
