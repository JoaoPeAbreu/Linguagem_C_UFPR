/*Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores do maior para o menor.
Entrada
1
3
5
7
9
2
4
6
8
10
Saída
10
9
8
7
6
5
4
3
2
1*/

#include <stdio.h>

int main(void) {
    int v[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (v[j] < v[j + 1]) {
                int t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}