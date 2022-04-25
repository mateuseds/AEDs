//  Exercício 4j) Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do número de termos.


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a1, a2, n, r, an, soma;
    print("Primeiro termo:\n");
    scanf("%i",&a1);
    print("Segundo termo:\n");
    scanf("%i",&a2);
    print("Numero de termos:\n");
    scanf("%i",&n);
    r = a2 - a1;
    an = a1 + (n - 1) * r;
    soma = n * (a1 + an) / 2;
    printf("A soma dos termos é: %i", soma);
    return 0;
}

// TESTE
// Entrada: (Termo 1 = 4) (Termo 2 = 5) (Numero de termos = 2)
// Saída: 9
