/*Faça um programa que leia uma String e apresente todos os sufixos da string em ordem léxica.
Exemplo:

Entrada:
Banana

Saída:

a
ana
anana
banana
na
nana*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compareStrings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(void) {
    char str[100];

    scanf("%s", str);

    int length = strlen(str);

    char *sufixos[length];

    for (int i = 0; i < length; i++) {
        sufixos[i] = &str[i];
    }

    qsort(sufixos, length, sizeof(char *), compareStrings);

    for (int i = 0; i < length; i++) {
        printf("%s\n", sufixos[i]);
    }

    return 0;
}