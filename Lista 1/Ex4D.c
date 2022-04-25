// Exercício 4d) Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F). 


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main () {
    float temperaturaC,temperaturaF,formulaF;
    printf("Temperatura em c:\n");
    scanf("%f",&temperaturaC);
    formulaF= temperaturaC*(9/5);
    temperaturaF=formulaF+32;
    printf("Temperatura em F foi %f\n",temperaturaF);
    return 0;
}

// TESTE
// Entrada: Temperatura C = 30
// Saída: 62



