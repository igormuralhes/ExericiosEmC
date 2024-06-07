#include <stdlib.h>
#include <stdio.h>

/* EXERCICIO 5 - IMC */

int main()
{
    float peso;
    float altura;
    float imc;
    
    printf("\tDigite o peso e altura:\n");
    scanf("%f%f", &peso, &altura);
    
    imc = peso/(altura*altura);
    
    if(imc < 18.5)
        printf("\n IMC = %.2f, Abaixo do peso", imc);
    
    else if(imc >= 18.5 && imc < 25)
        printf("\n IMC = %.2f, Peso normal", imc);
    
    else if(imc >= 25 && imc < 30)
        printf("\n IMC = %.2f, Sobrepeso", imc);    
        
    else if(imc >= 30 && imc < 35)
        printf("\n IMC = %.2f, Obesidade Grau I", imc);
        
    else if(imc >= 35 && imc < 40)
        printf("\n IMC = %.2f, Obesidade Grau II", imc);
    
    else  
        printf("\n IMC = %.2f, Obesidade Grau II", imc);
        
    return 0;
}
