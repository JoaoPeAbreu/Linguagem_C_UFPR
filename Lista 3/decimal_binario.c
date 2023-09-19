/* Faça uma função que receba um vetor de char e um número e retorne no vetor os valores ‘0’ e ‘1’ correspondente ao
 valor binário de cada posição do número. Considere números de até 32 bits. (Considere o vetor com 33 posições). 
 Preserve os zeros a direita do digito significativo.

Complemente o código (lembrem-se do include stdio.h):

void func(char vet[], int num) {
// complemente o código
}

int main(void) {
int num;
char str[33];
scanf("%d",&num);
func(str,num);
printf("%s\n",str);
}*/


#include <stdio.h>

void func(char vet[], int num) {
    int bitMask = 1 << 31;
    
    for (int i = 0; i < 32; i++) { 
        if (num & bitMask) {
            vet[i] = '1'; 
        } else {
            vet[i] = '0'; 
        }
        bitMask = bitMask >> 1;
    }
    vet[32] = '\0';
}

int main(void) {
    int num;
    char str[33];
    scanf("%d", &num);
    func(str, num);
    printf("%s\n", str);
    return 0;
}
