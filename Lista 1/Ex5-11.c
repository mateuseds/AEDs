//  Exercício 5.11 ler três valores reais do teclado e dizer se o primeiro está entre os outros dois


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main() {
    int valor1, valor2, valor3;
    printf("Qual o primeiro valor?\n");
    scanf("%i",&valor1);
    printf("Qual o segundo valor?\n");
    scanf("%i",&valor2);
    printf("Qual o terceiro valor?\n");
    scanf("%i",&valor3);
    if (valor1 > valor2 && valor1 < valor3) {
        printf("Valor 1 esta entre os outros 2 valores\n")
    };
    return 0;
}

// TESTE
// Entrada: 6, 4, 8
// Saída: Valor 1 esta entre os outros 2 valores
