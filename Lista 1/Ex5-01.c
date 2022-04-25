//  Exercício 5.1 Ler um valor inteiro do teclado e dizer se é par


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main() {
    int numero, resto;
    printf("Qual o número?\n");
    scanf("%i",&numero);
    resto = numero % 2;
    printf("O resto da divisao de %i por 2:\n",numero,resto);
    if (resto == 0) {
        printf("Numero Par\n")
    };
    return 0;
}

// TESTE
// Entrada: 4
// Saída: par
