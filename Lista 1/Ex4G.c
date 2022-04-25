/*  Exercício 4g) Pedro comprou um saco de Ração com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a quantidade de ração em gramas. 
    Faça um algoritmo que receba o peso do Saco de ração e a quantidade de ração fornecida para cada gato. 
    Calcule e mostre quanto restará de ração no saco após 5 (cinco) dias
*/

#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main()
{
    float pesoRacao, racaoDiaria, resto;
    printf("Informe o peso do saco de ração em Kg:\n");
    scanf("%f",&pesoRacao);
    printf("Informe a quantidade diaria em g:\n");
    scanf("%f",&racaoDiaria);
    resto = pesoRacao-((racaoDiaria*2*5)/1000);
    printf("O restante de ração é: %.2fKg\n",resto);
    system("pause");
    return 0;
}

// TESTE
// Entrada: 20
// Saída: 16
