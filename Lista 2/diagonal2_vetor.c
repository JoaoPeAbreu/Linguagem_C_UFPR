/*Faça um programa que leia uma matriz de inteiros de 3x3 e apresente os elementos da diagonal secundária.
Exemplo:
Entrada
1 2 3
4 5 6
7 8 9
Saída
3
5
7*/

#include <stdio.h>

int main(void) {
    int v[3][3];
    
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            scanf("%d", &v[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
            printf("%d\n", v[i][2 -i]);
    }
}