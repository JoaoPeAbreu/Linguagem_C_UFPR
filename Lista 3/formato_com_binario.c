/*Dados um vetor com a capacidade de 33 elementos, sendo que os 32 primeiros elementos representam dígitos binários 
(0,1) e o 33 o terminador da string. O conteúdo deverá ser lido como uma String (gets).
Apresente-os formatando-os de forma que sejam apresentados blocos de 4 dígitos e um espaço entre os 8 blocos.*/

#include <stdio.h>
#include <string.h>

void formatBinaryString(char vet[]) {
    int length = strlen(vet);
    int blockCounter = 0;

    for (int i = 0; i < length; i++) {
        printf("%c", vet[i]);

        if ((i + 1) % 4 == 0) {
            printf(" ");

            if (++blockCounter == 8) {
                printf("\n");
                blockCounter = 0;
            }
        }
    }

    printf("\n");
}

int main(void) {
    char str[33];
    gets(str);
    formatBinaryString(str);
    return 0;
}