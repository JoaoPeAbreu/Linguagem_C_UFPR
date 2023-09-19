/*Faça um programa que leia um número de ponto flutuante e apresente em linhas separadas a parte inteira e a parte 
fracionária.*/

#include <stdio.h>

int main(void){
    float nu, fl;
    int in;

    scanf("%f", &nu);

    in = (int) nu;
    fl = nu - in;

    printf("%d\n", in);
    printf("%f\n", fl);
}