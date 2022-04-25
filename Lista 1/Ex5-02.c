//  Exercício 5.2 ler um valor inteiro do teclado e dizer se é ímpar


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main() {
    int numero, resto;
    printf("Qual o número?\n");
    scanf("%i",&numero);
    resto = numero % 2!=0;
    printf("O resto da divisao de %i por 2:\n",numero,resto);
    if (resto == 1) {
        printf("Numero impar\n")
    };
    return 0;
}

// TESTE
// Entrada: 3
// Saída: impar
