/*Faça um programa que leia duas Strings, verifique se elas formam anagramas, ignorando variação de caixa e espaços em 
brancos e apresente: “Formam anagramas” ou “Nao formam anagramas”
Exemplo:
Entrada 1
roma
amor
Saída:
Formam anagramas

Entrada 2
Casa
Asa
Saída:
Nao formam anagramas*/

#include <stdio.h>
#include <string.h>

void eAnagrama(char *str) {
    int length = strlen(str);
    char temp;
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];

    gets(str1);

    gets(str2);

    eAnagrama(str1);
    eAnagrama(str2);

    if (strcmp(str1, str2) == 0) {
        printf("Formam anagramas\n");
    } else {
        printf("Nao formam anagramas\n");
    }
}