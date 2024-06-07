#include <stdlib.h>
#include <stdio.h>

/* EXERCICIO 5 - Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.*/

int main()
{
    char letra;
    
    printf("\tDigite uma letra:\n");
    scanf("%c",  &letra);
   /* 
    if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'||letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U')
        printf("\nÉ VOGAL");
    else
        printf("CONSOANTE");
    */
    
    
    switch(letra){
        case 'a':
            printf("\n\tÉ VOGAL");
            break;
        case 'e':
            printf("\n\tÉ VOGAL");
            break;
        case 'i':
            printf("\n\tÉ VOGAL");
            break;
        case 'o':
            printf("\n\tÉ VOGAL");
            break;
        case 'u':
            printf("\n\tÉ VOGAL");
            break;
        case 'A':
            printf("\n\tÉ VOGAL");
            break;
        case 'E':
            printf("\n\tÉ VOGAL");
            break;
        case 'I':
            printf("\n\tÉ VOGAL");
            break;
        case 'O':
            printf("\n\tÉ VOGAL");
            break;
        case 'U':
            printf("\n\tÉ VOGAL");
            break;
        default:
            printf("É UMA CONSOANTE!!!!");
    }
    
    
    return 0;
}
