/*Faça um programa que leia uma String e apresente todos os prefixos da string.
Exemplo 1:
Entrada:
pedra
saída:
p
pe
ped
pedr
pedra*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100]; 

    scanf("%s", str);
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}