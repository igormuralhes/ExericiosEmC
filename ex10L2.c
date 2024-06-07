#include <stdlib.h>
#include <stdio.h>

/* EXERCICIO 10 - Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
formam um triângulo”.*/

int main()
{
    int a, b, c;
    int soma;
    
    printf("\tDigite o valor dos lados dos triangulos:\n");
    scanf("%d%d%d", &a, &b, &c);

    if(a<(c+b)&&b<(a+c)&&c<(a+b)){
        printf("É um triangulo válido e ");
        if(a==b && b==c & c==a)
        printf("EQUILÁTERO");
        else if(a==b||b==c)
        printf("ISÓSCELES");
        else
        printf("ESCALENO");
    }   
    else
        printf("\nNão formam um triangulo!\n");
    
    
    
    return 0;
}
