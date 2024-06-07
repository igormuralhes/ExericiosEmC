#include <stdlib.h>
#include <stdio.h>

/* EXERCICIO 2 - Escreva um programa em C que lê 5 números inteiros, um por vez.
Conte quantos destes valores são negativos e quantos são positivos. Ao final, 
imprima na tela a quantidade de números negativos e positivos*/

int main()
{
    int a, b, c, d, e;
    int countp, countn = 0;
    
    printf("\tOlá digite um valor inteiro: ");
    scanf("%d", &a);
    printf("\n\tDigite outro valor inteiro: ");
    scanf("%d", &b);
    printf("\n\tDigite outro valor inteiro: ");
    scanf("%d", &c);
    printf("\n\tDigite outro valor inteiro: ");
    scanf("%d", &d);
    printf("\n\tDigite o último valor inteiro: ");
    scanf("%d", &e);
    
    if(a<0)
        countn++;
    else
        countp++;
    
    if(b<0)
        countn++;
    else
        countp++;

    if(c<0)
        countn++;
    else
        countp++;

    if(d<0)
        countn++;
    else
        countp++;

    if(e<0)
        countn++;
    else
        countp++;

    printf("\n\nTemos %d positivos e %d negativos", countp, countn);
    
    return 0;
}
