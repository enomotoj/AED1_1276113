/* --------------------------------------------------------------------------
Disciplina  : Algortimo e Estrutura de Dados 2026S1
Nome        : Julia Enomoto Aguiar
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 10/08/2026
Objetivo    : Exibir o menor valor de um vetor
Dificuldade : 
Uso de IA   : uso da ia para compilar o codigo
-------------------------------------------------------------------------- */

#include<stdio.h>
        int main(){
            
            int N;
            scanf("%d", &N);
            
            int string[N];
            
            for(int i = 0; i < N ; i++){
                scanf("%d", &string[i]);
            }
            
            int menor = string[0], posicao= 0;
            
            for (int j = 1 ; j <N ; j++){
                if (string[j] < menor){
                    menor = string[j];
                    posicao = j;
                }
            }
        printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
        return 0;
        }
