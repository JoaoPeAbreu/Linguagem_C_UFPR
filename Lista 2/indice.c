/*Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, leia dois valores inteiros que estejam entre 0 e 9 (índices a e b) e apresente os valores lidos (vetor) que estejam entre os índices a e b.
Entrada
1 2 3 4 5 6 7 8 9 10
3 5
saída
4
5
6*/

#include <stdio.h>

int main(void) {
    int v[10];
    int a, b;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (i >= 0 && i < 10) {
            printf("%d\n", v[i]);
        }
    }
}