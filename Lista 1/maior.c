/*Faça um programa que leia 10 números inteiros e apresente o maior (não utilize vetor/matriz).*/

#include <stdio.h>

int main(void) {
    int n, m, i;

    scanf("%d", &n);
    m = n; 

    for (i = 1; i < 10; i++) {
        scanf("%d", &n);
        
        if (n > m) {
            m = n;
        }
    }

    printf("%d\n", m);

    return 0;
}