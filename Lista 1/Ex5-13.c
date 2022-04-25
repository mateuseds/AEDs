//  Exercício 5.13 ler três valores literais (caracteres) do teclado e dizer se o primeiro está entre os outros dois


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main() {
    char x, y, z;
    printf("Digite x:\n");
    scanf("%c",&x);
    printf("Digite y:\n");
    scanf("%c",&y);
    printf("Digite z:\n");
    scanf("%c",&z);
    if ( x < y && x > z || x < z && x > y) {
        printf(" 1 ");
    }else {
        printf(" 0 ");
    }
    return 0;

// TESTE
// Entrada: (x = d) (y = k) (z = p)
// Saída: 0
