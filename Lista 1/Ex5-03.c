//  Exercício 5.3 ler um valor inteiro do teclado e dizer se ímpar e maior que 100. 


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main() {
    int valor, resto;
    printf("Insira um número\n");
    scanf("%i",&valor);
    resto = valor % 2;
    printf("O resto da divisao de %i por 2:\n",valor,resto);
    if (resto == 1, valor>100) {
         printf("Numero impar maior que 100\n")
    };
    return 0;
}

// TESTE
// Entrada: 201
// Saída: Numero impar maior que 100
