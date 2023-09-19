/* Faça um programa que leia uma matriz de inteiros de 3x4 e apresente os elementos em que a soma dos índices i e j sejam pares. Respeite a ordem de apresentação linha,coluna.

a soma de cada coluna. A saída deverá ter um número por linha.
Exemplo de entrada
1 2 3 4
5 6 7 8
9 10 11 12
Saída
1
3
6
8
9
11*/

#include <stdio.h>

int main(void) {
    int v[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &v[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if((i + j) % 2 == 0){
                printf("%d\n", v[i][j]);
            }
        }
    }
}