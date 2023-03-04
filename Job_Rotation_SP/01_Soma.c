/*
1) Observe o trecho de código abaixo:

int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça
{
K = K + 1;
SOMA = SOMA + K;
}

imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA?
*/

#include <stdio.h>

int main()
{
    int indice=13, soma=0, k=0, i=0;
    
    for(i=0 ; i<indice ; i++){
        k = k+1;
        soma = soma + k;
    }
    printf("Soma: %d", soma);
    return 0;
}

// RESPOSTA: 91