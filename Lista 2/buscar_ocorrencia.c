/*Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, leia um número e procure esse número 
no vetor. E apresente o índice de todas as ocorrências localizadas, caso contrário -1.*/

#include <stdio.h>

int main(void) {
    int v[10], o[10], n;
    int l = -1;
    int j = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &n);

    for (int i = 0; i < 10; i++) {
        if (v[i] == n) {
            o[j] = i;
            l = i;
            j++;
        }
    }

    if(l == -1){
        printf("%d", l);
    } else{
        for(int i = 0; i < j; i++){
            printf("%d\n", o[i]);
        }
    }
}