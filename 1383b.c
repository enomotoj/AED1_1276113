/* --------------------------------------------------------------------------
Disciplina  : Algortimo e Estrutura de Dados 2026S1
Nome        : Julia Enomoto Aguiar
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 28/09/2026
Objetivo    : Montar um sudoku.
Dificuldade : uso de ponteiros
Uso de IA   : compilacao do código e sugestões de melhorias
-------------------------------------------------------------------------- */
#include <stdio.h>

int verf_sudoku(int *matriz) {
    // Verificar as linhas e colunas
    for (int i = 0; i < 9; i++) {
        int linhas[10] = {0};
        int colunas[10] = {0};
        for (int j = 0; j < 9; j++) {
            int valorLin = *(matriz + i * 9 + j);
            int valorCol = *(matriz + j * 9 + i);
            if (valorLin > 9 || valorLin < 1 || valorCol > 9 || valorCol < 1) {
                return 0;
            } else {
                if (linhas[valorLin] > 0 || colunas[valorCol] > 0) {
                    return 0;
                }
                linhas[valorLin] = 1;
                colunas[valorCol] = 1;
            }
        }
    }

    // Verificar as submatrizes 3x3
    for (int subMatrizL = 0; subMatrizL < 9; subMatrizL += 3) {
        for (int subMatrizC = 0; subMatrizC < 9; subMatrizC += 3) {
            int matrizz[10] = {0};
            for (int lin = 0; lin < 3; lin++) {
                for (int col = 0; col < 3; col++) {
                    int num = *(matriz + (subMatrizL + lin) * 9 + (subMatrizC + col));
                    if (num > 9 || num < 1 || matrizz[num] > 0) {
                        return 0;
                    }
                    matrizz[num] = 1;
                }
            }
        }
    }
    return 1;
}

int main() {
    int n;
    int sudoku[9][9];
    int *p = (int *)sudoku;

    if (scanf("%d", &n) != 1) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        // Leitura da matriz atual
        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                scanf("%d", &sudoku[j][k]);
            }
        }
        printf("Instancia %d\n", i + 1);
        if (verf_sudoku(p) == 1) {
            printf("SIM\n\n");
        } else {
            printf("NAO\n\n");
        }
    }

    return 0;
}
