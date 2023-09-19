/*Faça um programa que leia uma string e apresente os símbolos e a frequência (número de ocorrência de cada símbolo na 
string lida). O programa deverá apresentar um símbolo e a frequência por linha e omitir os símbolos que não ocorram 
(frequência zero). Considere o intervalo de 32 a 128 da tabela ASCII.
Exemplo
Entrada
ana

Saída
a 2
n 1*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[97];
    char sim;

    gets(str);

    for (int i = 0; i < 97; i++) {
        freq[i] = 0;
    }

    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        sim = str[i];
        if (sim >= 32 && sim <= 128) {
            freq[sim - 32]++;
        }
    }

    for (int i = 0; i < 97; i++) {
        if (freq[i] > 0) {
            printf("%c %d\n", i + 32, freq[i]);
        }
    }
}