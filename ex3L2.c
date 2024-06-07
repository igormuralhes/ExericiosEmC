#include <stdlib.h>
#include <stdio.h>

/* EXERCICIO 3 - Escreva um programa em C que leia um número e informe se ele é divisível por 2,
por 3 ou por 5, ou se não é divisível por nenhum deles.*/

int main()
{
    int num = 0;
    int resto2, resto3, resto5;
    printf("\tDigite um numero: ");
    scanf("%d", &num);
    
    resto2 = num % 2;
    resto3 = num % 3;
    resto5 = num % 5;
    
    if(resto2 == 0)
        printf("\nO número é divisível por 2");
    else if(resto3 == 0)
        printf("\nO número é divisível por 3");
    else if(resto5 == 0)
        printf("\nO número é divisível por 5");
    else
        printf("\nO numero não é divisível por 2, 3 ou 5.");

    return 0;
}
