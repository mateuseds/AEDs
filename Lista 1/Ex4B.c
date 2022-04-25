// Exercício 4b) Calcule a média aritmética de quatro números inteiros.


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main () {
    int ex1,ex2,ex3,ex4,media;
    printf("Primeiro numero:\n");
    scanf("%f",&ex1);
    printf("Segundo numero:\n");
    scanf("%f",&ex2);
    printf("Terceiro numero:\n");
    scanf("%f",&ex3);
    printf("Quarto numero:\n");
    scanf("%f",&ex4);
    media=(ex1+ex2+ex3+ex4)/4;
    printf("media=%.2f\n",media);
    return 0;
}

// TESTE
// Entrada: 5,5,5,5
// Saída: media= 5


