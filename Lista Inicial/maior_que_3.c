/*Faça um programa que leia três valores inteiros (a,b,c) e apresente o maior número lido.

Exemplo de leitura
5
-1
10

Exemplo de saída
10*/

#include <stdio.h>

int main(void) {
    int a, b, c;

    scanf("%d", &a);
    
    scanf("%d", &b);
    
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("%d\n", a);
    } 
    else if (b > a && b > c) {
        printf("%d\n", b);
    } 
    else {
        printf("%d\n", c);
    }
}