/*Faça um programa que leia uma lista de números inteiros terminados por 0, para cada número lido o programa deve informar o número e se o número é par ou ímpar. Não utilize vetores/matrizes.

mostre apenas "par" ou "impar" (sem acentos).*/

#include <stdio.h>

int main(void) {
    int n;

    while (1) {
        scanf("%d", &n);
        
        if (n == 0) {
            break;
        }
        if ((n&1) == 0) {
            printf("%d", n);
            printf(" par\n");
        } else {
            printf("%d", n);
            printf(" impar\n");
        }
    }
}