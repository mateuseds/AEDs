//  Exercício 5.9 ler dois valores inteiros do teclado e dizer se o primeiro é par e positivo, e o segundo é ímpar e negativo.


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main() {
    int valor1, valor2, resto1, resto2;
    printf("Quaal o primeiro numeros?\n");
    scanf("%i",&valor1);
    printf("Quaal o segundo numeros?\n");
    scanf("%i",&valor2);
    resto1 = valor1 % 2;
    resto2 = valor2 % 2;
    if (valor1 > 0 && resto1 == 0 && valor2 < 0 && resto2 == -1) {
        printf("Primeiro número par e positivo, e o segundo impar e negativo.\n")
    };
    return 0;
}

// TESTE
// Entrada: 10 e -5
// Saída: Primeiro número par e positivo, e o segundo impar e negativo.
