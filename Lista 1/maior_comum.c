/*Faça um programa que leia dois números A e B e apresente o maior divisor comum dos dois números.*/

#include <stdio.h>

int main(void) {
    int a, b;

    scanf("%d", &a);
    
    scanf("%d", &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d\n", a);

    return 0;
}