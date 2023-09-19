/*Faça um programa que leia uma String e apresente todos os sufixos da string.
Exemplo 1:
Entrada:
pedra
saída:
pedra
edra
dra
ra
a*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100]; 

    scanf("%s", str);
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}