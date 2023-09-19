/*Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores contidos no vetor, onde a diferença entre os valores contidos em dois elementos sucessivos não seja maior do que um.
Entrada
1
3
4
8
9
2
4
6
8
10
Saída
3 4
8 9*/
#include <stdio.h>

int main(void) {
    int v[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

for (int i = 0; i < 9; i++) {
        if (abs(v[i] - v[i + 1]) <= 1) {
            printf("%d %d\n", v[i], v[i + 1]);
        }
    }
}