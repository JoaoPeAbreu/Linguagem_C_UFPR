/*Faça um programa que apresente os números de 20 a 1 (em ordem decrescente), um número em cada linha.*/

#include <stdio.h>

int main(void){
    int i;

    i = 20;

    while (i>=1){
        printf("%d\n", i);
        i--;
    }
}