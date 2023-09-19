/*Faça um programa que leia uma tecla e apresente o código ASCII da tecla seguido de quebra de linha.*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char tecla;

    tecla = getch();
    printf("\n");
    printf("%d \n", tecla);

    return 0;
}