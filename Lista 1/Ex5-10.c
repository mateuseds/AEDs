//  Exercício 5.10 ler dois valores reais do teclado e dizer se o primeiro é maior, menor ou igual ao segundo.


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main() {
    int valor1, valor2 ;
    printf("Qual o primeiro número?\n");
    scanf("%i",&valor1);
    printf("Qual o segundo número?\n");
    scanf("%i",&valor2);
    if (valor1 > valor2) {
        printf("O primeiro numero é > o segundo numero\n")
    };
    if (valor1 < valor2) {
        printf("O primeiro numero é < o segundo numero\n")
    };
    if (valor1 == valor2) {
        printf("O primeiro numero é = ao segundo numero\n")
    };
    return 0;
}

// TESTE
// Entrada: 10 e 5 
// Saída: O primeiro numero é > o segundo numero
