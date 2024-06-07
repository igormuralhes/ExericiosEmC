#include <stdlib.h>
#include <stdio.h>

/* EXERCICIO 8 - Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
isso a estrutura de seleção switch.*/

int main()
{
    int mes;
    
    printf("\tDigite o numero do mes:\n");
    scanf("%d",  &mes);
   
    switch(mes){
        case 1:
            printf("\n\tJANEIRO TEM 31 DIAS");
            break;
        case 2:
            printf("\n\tFEVEREIRO TEM 28 DIAS");
            break;
        case 3:
            printf("\n\tMARÇO TEM 31 DIAS");
            break;
        case 4:
            printf("\n\tABRIL TEM 30 DIAS");
            break;
        case 5:
            printf("\n\tMAIO TEM 31 DIAS");
            break;
        case 6:
            printf("\n\tÉ VOGAL 30 DIAS");
            break;
        case 7:
            printf("\n\tJULHO TEM 31 DIAS");
            break;
        case 8:
            printf("\n\tAGOSTO TEM 31 DIAS");
            break;
        case 9:
            printf("\n\tSETEMBRO 30 DIAS");
            break;
        case 10:
            printf("\n\tOUTURBO TEM 31 DIAS");
            break;
        case 11:
            printf("\n\tNOVEMBRO TEM 30 DIAS");
            break;
        case 12:
            printf("\n\tDEZEMBRO TEM 31 DIAS");
            break;
        default:
            printf("MES INVALIDO!!");
    }
    
    
    return 0;
}
