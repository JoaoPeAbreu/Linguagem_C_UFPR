/*Faça um programa que leia 10 números, armazene-os em um vetor e apresente os 5 (cinco) números que estão nas 
posições ímpares.*/

#include <stdio.h>

int main(void) {
    int v[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 != 0) {
            printf("%d\n", v[i]);
        }
    }
}