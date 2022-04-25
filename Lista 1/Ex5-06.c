//  Exercício 5.6 ler um valor inteiro do teclado e dizer se pertence ao intervalo fechado entre [25:75].


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main() {
    int valor;
    printf("Qual o numero?\n");
    scanf("%i",&valor);
    if (valor >= 25 && valor <= 75) {
        printf("Pertence\n");
    } else {
        printf("Não pertence\n");
    };
    system("pause");
    return 0;
}

// TESTE
// Entrada: 25
// Saída: pertence
