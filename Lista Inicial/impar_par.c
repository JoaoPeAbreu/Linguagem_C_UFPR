/*Faça um programa que leia um número e apresente o número lido e a seguir se ele é "par" ou "impar" (sem acento).

Ex:
input
1
saída
1 impar

Ex 2:
input
2
saída
2 par*/

#include <stdio.h>

int main(void){
    int n;

    scanf("%d", &n);

    if( n % 2 == 0 ){
        printf("%d par", n);
    }
    else{
        printf("%d impar", n);
    }
}