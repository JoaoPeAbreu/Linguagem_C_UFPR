/*Faça um programa que leia três números e os apresente em ordem crescente.
Apresente um número por linha.*/

#include <stdio.h>

int main(void){
    int n1, n2, n3, mai, med, men;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3){
        men = n1;
    }
    else if(n2 > n1 && n2 > n3){
        men = n2;
    }
    else{
        men = n3;
    }

    if(n1 < n2 && n1 < n3){
        mai = n1;
    }
    else if(n2 < n1 && n2 < n3){
        mai = n2;
    }
    else{
        mai = n3;
    }

    if((mai == n1 && men == n2) || (mai == n2 && men == n1)){
        med = n3;
    }
    else if((mai == n1 && men == n3) || (mai == n3 && men == n1)){
        med = n2;
    }
    else{
        med = n3;
    }

    printf("%d\n", mai);
    printf("%d\n", med);
    printf("%d\n", men);

}