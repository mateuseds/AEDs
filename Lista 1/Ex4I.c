//  Exercício 4i) Leia um número e imprima o resto da divisão por 7. Utilize o comando resto (a,b) na linguagem C (a % b).


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, resto;
    print("Qual o numero?\n");
    scanf("%i",&numero);
    resto = numero % 7;
    print("O resto é:%i\n",resto)
    return 0;
}

// TESTE
// Entrada: 200
// Saída: 14
