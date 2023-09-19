/*Faça um programa que apresente os números de 1 a 20, cada número em uma linha.*/

#include <stdio.h>

int main(void){
    int n, i;

    n = 20;
    i =1;

    while (i<=n){
        printf("%d\n", i);
        i++;
    }
}