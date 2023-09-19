/*Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, leia um número e procure esse número no 
vetor. Se encontrar, apresente o índice da posição da primeira que ocorrência do número, caso contrário apresente o 
valor -1.*/

#include <stdio.h>

int main(void) {
    int v[10], n;
    int l = -1;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &n);

    for (int i = 0; i < 9; i++) {
        if (v[i] == n) {
            l = i;
            break;
        }
    }

    printf("%d", l);
}