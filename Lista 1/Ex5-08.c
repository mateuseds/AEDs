//  Exercício 5.8 ler dois valores inteiros do teclado e dizer se o primeiro é par e o segundo é ímpar.


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main() {
   int valor1, valor2, resto1, resto2;
    printf("Quais os numeros?\n");
    scanf("%i%i",&valor1,&valor2);
    resto1 = valor1 % 2;
    resto2 = valor2 % 2;
    if (valor == 0 && resto2 == 1) {
        printf("O primeiro é par e o segundo impar\n");
    } else {
        printf("O primeiro não é par e não é o segundo impar\n");
    };
    return 0;
}

// TESTE
// Entrada: 10 e 5
// Saída: o primeiro é par segundo é impar
