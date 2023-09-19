/*Faça um programa que leia um número N e apresente todos os divisores de N (do menor para o maior, de 1 a N-1).*/

#include <stdio.h>

int main(void) {
    int n, i;

    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }
}