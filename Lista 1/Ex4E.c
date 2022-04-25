// Exercício 4e) Faça um algoritmo que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o novo salário.


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main () {
    float salario,percentual,valorAumento,salarioTotal,valorPorCento
    printf("Salario:\n");
    scanf("%f",&salario);
    printf("Percentual de aumento\n");
    scanf("%f",&valorPorCento);
    percentual = valorPorCento/100;
    valorAumento = salario*percentual;
    salarioTotal = salario+valorAumento;
    printf("Salario total de: %f\n",salarioTotal);
    return 0;
}

// TESTE
// Entrada: (Salario = 1400) (Percentual 10%)
// Saída: 1540



