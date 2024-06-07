#include <stdlib.h>
#include <stdio.h>

/* EXERCICIO 9 - Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule e
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).*/

int main()
{
    char opcao;
    float a, b, c = 0;
    float nota = 0;
    
    printf("\tDigite a opcao selecionada:\nA - Média Aritmética\nP - Média Ponderada\n");
    scanf("%c",  &opcao);
   
    switch(opcao){
        case 'a':
        case 'A':
            printf("\n\tMÉDIA ARITMÉTICA\n\tDigite as três notas:\n");
            scanf("%f%f%f", &a, &b, &c);
            nota = (a + b + c)/3;
            printf("A média é %.1f", nota);
            
            break;
        case 'p':
        case 'P':
            printf("\n\tMÉDIA PONDERADA\n\tDigite as três notas:\n");
            scanf("%f%f%f", &a, &b, &c);
            nota = ((3*a)+(3*b)+(4*c))/(10);
            printf("A média é %.1f", nota);
            break;
        default:
            printf("OPCAO INVALIDA!!");
    }
    
    
    return 0;
}
