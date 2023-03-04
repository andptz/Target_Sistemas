/*
5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[] = "Socorram-me subi no onibus em Marrocos!";
    char tmp;
    int tam = strlen(frase);
    
    for(int i=0; i < tam/2 ; i++) {
       tmp = frase[i];
       frase[i] = frase[tam-i-1];
       frase[tam-i-1] = tmp;
    }
    printf("%s", frase);
}