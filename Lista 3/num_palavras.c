/*Faça um programa que leia uma frase e apresente o número de palavras lidas. Considere todo símbolo não alfabético 
ou não numérico como delimitador.
Exemplo:
Entrada
A casa das 7 irmãs.
Saída:
5*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[1000];
    int contagem = 0;
    int dentro = 0;

    gets(frase);

    int length = strlen(frase);

    for (int i = 0; i < length; i++) {
        if (isalpha(frase[i]) || isdigit(frase[i])) {
            dentro = 1;
        } else {
            if (dentro) {
                contagem++;
            }
            dentro = 0;
        }
    }

    if (dentro) {
        contagem++;
    }

    printf("%d\n", contagem);

    return 0;
}