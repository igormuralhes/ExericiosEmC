#include <stdlib.h>
#include <stdio.h>

/* EXERCICIO 4 - Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar
ou de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5,30.*/

int main()
{
    float valor;
    int opcao;
    
    printf("\tSeleciona qual operação voce quer fazer:\n1 - Real para Dolar\n2 - Dolar para Real\n");
    scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
            printf("\n1 - Real para Dolar \n\n\tDigite o valor em REAIS: ");
            scanf("%f", &valor);
            printf("Valor em DOLAR: %.2f", valor/5.30);
            break;
    
        case 2:
            printf("\n2 - Dolar para Real\n\n\tDigite o valor em DOLARES: ");
            scanf("%f", &valor);
            printf("Valor em REAIS: %.2f", valor*5.30);
            break;
    
        default:
            printf("\nOpcao Invalida");
            break;
    }
    
    return 0;
}
