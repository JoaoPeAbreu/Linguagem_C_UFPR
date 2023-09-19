/*Faça um programa que leia duas strings, compare as strings e apresente na tela os valores "0" se forem iguais, "-1"
 se str1 for menor que str2, caso contrário "1".

Não deverá utilizar as funções da string.h (strcmp, stricmp, strncmp etc)

Atenção não apresente nada diferente disso.

Ex 1:
input:
ana
Ana
output
1*/

#include <stdio.h>

int main(void) {
    char str1[100], str2[100];
    int result = 0;

    scanf("%s %s", str1, str2);

    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            result = -1;
            break;
        } else if (str1[i] > str2[i]) {
            result = 1;
            break;
        }
        i++;
    }

    if (result == 0 && str1[i] == '\0' && str2[i] != '\0') {
        result = -1;
    } else if (result == 0 && str1[i] != '\0' && str2[i] == '\0') {
        result = 1;
    }

    printf("%d\n", result);

    return 0;
}