//  Exercício 5.4 ler um valor inteiro do teclado e dizer se é par e menor que 100, ou ímpar e maior que 100.


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main() {
    int valor, resto;
    printf("Insira um número inteiro\n");
    scanf("%i",&valor);
    resto = valor % 2;
    if (resto == 1 && valor>100){
        printf("Numero impar maior que 100\n")
    }
    else if(resto == 1 && valor<100) {
        printf("Numero impar menor que 100\n")
    }
    else if(resto == 0 && valor>100) {
        printf("Numero par maior que 100\n")
    } else {
        printf("Numero par menor que 100\n")
    };
    return 0;
}

// TESTE
// Entrada: 10
// Saída: numero par menor que 100
