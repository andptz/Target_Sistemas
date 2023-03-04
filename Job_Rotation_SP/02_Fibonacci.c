/*
2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos
2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem 
que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem 
avisando se o número informado pertence ou não a sequência.

IMPORTANTE:
Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
*/

#include<stdio.h>

int main ()
{
    unsigned vet[4];
    unsigned int i;
    vet[0]=0;
    vet[1]=1;
    vet[2]=0;
    vet[3]=0;
 
    printf("Informe o numero a ser comparado: ");
    scanf("%u", &vet[3]);
    
    for (i=0 ; i<vet[3] ; i++)
    {    
        vet[2] = vet[0] + vet[1];
        
        if(vet[2] == vet[3])
        {
            printf("O valor pertence a sequência de Fibonacci.\n");
            return 0;
        }
        vet[0] = vet[1];
        vet[1] = vet[2];
    }
    printf("O valor não pertence a sequencia.\n");
    return 0;
}