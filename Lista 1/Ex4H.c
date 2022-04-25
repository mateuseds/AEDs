//  Exercício 4h) Ler dois números inteiros para variáveis a e b. Trocar o valor de b com o de a, e imprimi-los.


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b;
    printf("Escreva o valor de a:\n");
    scanf("%f",&a);
    printf("Escreva o valor de b:\n");
    scanf("%f",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a=%f\nb=%f",a,b);
    return 0;
}

// TESTE
// Entrada: (a = 5) (b = 4)
// Saída: (a = 4) (b = 5)
