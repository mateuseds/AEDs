// Exercício 4c) Faça um algoritmo que receba 3 (três) notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main () {
    int nota1,nota2,nota3,peso1,peso2,peso3,mediaPonderada;
    printf("Nota 1:\n");
    scanf("%i",&nota1);
    printf("Peso 1:\n");
    scanf("%i",&peso1);
    printf("Nota 2:\n");
    scanf("%i",&nota2);
    printf("Peso 2:\n");
    scanf("%i",&peso2);
    printf("Nota 3:\n");
    scanf("%i",&nota3);
    printf("Peso 3:\n");
    scanf("%i",&peso3);
    mediaPonderada = (nota1*peso1)*(nota2*peso2)*(nota3*peso3);
    printf("mediaPonderada=%i\n", mediaPonderada);
    return 0;
}

// TESTE
// Entrada:
// Nota1: 20 Peso:2
// Nota2: 30 Peso:1
// Nota3: 50 Peso:1
// Saída: 30000



