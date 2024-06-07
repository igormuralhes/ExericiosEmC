#include <stdlib.h>
#include <stdio.h>

/* EXERCICIO 1 - Escreva um programa em C que leia três valores e apresente qual é maior e qual é menor*/

int main()
{
    int a, b, c;
    
    printf("\tOlá digite três valores inteiros: ");
    scanf("%d%d%d", &a, &b, &c);
    
    if(a>b && a>c){
        printf("\n\n%d é o valor maior", a);
        if(b>c){
            printf("\n%d é o valor intermediario", b);
            printf("\n%d é o valor menor", c);
        }
        else{
            printf("\n%d é o valor intermediario", c);
            printf("\n%d é o valor menor", b);
        }
    }
    
    else if(b>a && b>c){
        printf("\n\n%d é o valor maior", b);
        if(a>c){
            printf("\n%d é o valor intermediario", a);
            printf("\n%d é o valor menor", c);
        }
        else{
            printf("\n%d é o valor intermediario", c);
            printf("\n%d é o valor menor", a);
        }
    }
    
    else if(c>a && c>b){
        printf("\n\n%d é o valor maior", c);
        if(b>a){
            printf("\n%d é o valor intermediario", b);
            printf("\n%d é o valor menor", a);
        }
        else{
            printf("\n%d é o valor intermediario", a);
            printf("\n%d é o valor menor", b);
        }
    }
    return 0;
}
