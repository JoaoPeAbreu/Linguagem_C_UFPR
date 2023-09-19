/*Faça um programa que leia 10 nomes e apresente os índices do vetor de nomes lidos, de forma, que se forem 
utilizados na apresentação, os nomes estarão ordenados. Observe que o vetor de nomes não sofre alteração.
Exemplo:
0 - Pedro
1 - Ana
2 - João
3 – Maria
Saída ao usar nomes[índices[i]] para i variando de 0 a 3:
1
2
3
0*/

#include <stdio.h>
#include <string.h>

int main(void){
    char nomes[10][100];
    int aux, i, j, ind[10];

    for (i = 0; i < 10; i++){
        gets(nomes[i]);
        ind[i] = i;
    }

    for (i = 0; i < 10; i++){
        for (j = i+1; j < 10; j++){
            if(strcmp(nomes[ind[i]], nomes[ind[j]]) > 0 ){
                aux = ind[i];
                ind[i] = ind[j];
                ind[j] = aux;
            } 
        }   
    }
    
    for (i = 0; i < 10; i++)  {
        printf("%d\n", ind[i]);
    }
}