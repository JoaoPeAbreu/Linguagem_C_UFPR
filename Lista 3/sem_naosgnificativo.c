/*Faça um programa que leia um número, chame uma função que converterá o número para Strings, sem os dígitos não 
significativos a esquerda. No programa principal, apresente o vetor retornado usando o %s no printf.*/

#include <stdio.h>
#include <stdlib.h>

char *converteStr(int num) {
    char *str = (char *)malloc(12);
    snprintf(str, 12, "%d", num);
    return str;
}

int main(void) {
    int n;
    char *string;

    scanf("%d", &n);

    string = converteStr(n);

    printf("%s\n", string);

    free(string);
}