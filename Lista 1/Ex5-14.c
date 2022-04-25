//  Exercício 5.14 ler três valores literais (caracteres) do teclado e dizer se estão em ordem crescente lexicograficamente.


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main() {
    char c1, c2, c3;
    printf("Primeiro caractere\n");
    scanf("%s",&c1);
    printf("\n O valor na tabela ascii desse caractere é: %d\n", c1);

    printf("Segundo caractere\n");
    scanf("%s",&c2);
    printf("\n O valor na tabela ascii desse caractere é: %d\n", c2);

    printf("Terceiro caractere\n");
    scanf("%s",&c3);
    printf("\n O valor na tabela ascii desse caractere é: %d\n", c3);
    if (c1 < c2 && c2 < c3) {
        printf("Ordem alfabética\n")
    } else {
        printf("erro")
    };
    return 0;
}


// TESTE
// Entrada: a, f, o
// Saída: Ordem alfabética
