/* Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores contidos no vetor que sejam a moda do conjunto (os valores com maior ocorrência no vetor. No caso de empate, apresente os valores com igual frequência).
Entrada
1
4
4
5
5
2
3
6
8
10
Saída
4
5*/

#include <stdio.h>

int main(void) {
    int v[10];
    int frequencia[10] = {0};
    int moda[10];
    int maxFrequencia = 0;
    int numModas = 0;


    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i++) {
        frequencia[v[i]]++;
    }

    for (int i = 0; i < 10; i++) {
        if (frequencia[i] > maxFrequencia) {
            maxFrequencia = frequencia[i];
            moda[0] = i;
            numModas = 1;
        } else if (frequencia[i] == maxFrequencia) {
            moda[numModas] = i;
            numModas++;
        }
    }

    for (int i = 0; i < numModas; i++) {
        printf("%d\n", moda[i]);
    }
}