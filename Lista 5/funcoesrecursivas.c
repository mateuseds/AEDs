#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ex01();
int ex02();
int ex02B(int valor1, int valor2);
int ex03();
int ex03B(int valor1, int valor2);

int main()
{
    int op;
    op = 0;

    while (op != -1)
    {
        printf("\nDigite qual exercicio gostaria de executar ou -1 para parar:\n");
        printf("\nExercicio 01 = 1");
        printf("\nExercicio 02 = 2");
        printf("\nExercicio 03 = 3\n\n");
        scanf("%i",&op);

        switch(op)
        {
        case -1:
            break;
        case 1:
            ex01();
            break;
        case 2:
            ex02();
            break;
        case 3:
            ex03();
            break;
        default:
            printf("\nSelecione um numero de 1 a 3\n");
        }
    }
    return 0;
}

// 1- Faca um programa que peca ao usuario dois valores e imprima o resto inteiro da divisao de X por Y voce nao pode utilizar o operador %


int ex01()
{
    int valor1, valor2, resto;

    printf("\nInsira o dividendo:");
    scanf("%i", &valor1);
    printf("\nInsira o divisor:");
    scanf("%i", &valor2);

    if(valor1 < valor2)
    {
        resto = valor1;
    }
    else
    {
        do
        {
            resto = valor1 - valor2;
            valor1 = resto;
        }
        while(resto >= valor2);
    }

    printf("\nResto = %i\n", resto);

    return 0;
}

// 2- Faca uma funcao que receba dois parametros (passados por valor) e retorne o resto inteiro da divisao de X por Y voce nao pode utilizar o operador %


int ex02()
{
    int valor1, valor2, resultado;
    printf("\nInsira o dividendo:");
    scanf("%i", &valor1);
    printf("\nInsira o divisor:");
    scanf("%i", &valor2);

    resultado = ex02B(valor1 , valor2);

    printf("\nO resto de %i dividido por %i = %i\n", valor1, valor2, resultado);

}

int ex02B(int valor1, int valor2)
{
    int resto;

    if(valor1 < valor2)
    {
        resto = valor1;
    }
    else
    {
        do
        {
            resto = valor1 - valor2;
            valor1 = resto;
        }
        while(resto >= valor2);
    }
    return resto;
}

// 3- Faca uma funcao RECURSIVA que receba dois parametros (passados por valor) e retorne o resto inteiro da divisao de X por Y

int ex03()
{
    int valor1, valor2, resultado;
    printf("\nInsira o dividendo:");
    scanf("%i", &valor1);
    printf("\nInsira o divisor:");
    scanf("%i", &valor2);

    resultado = ex03B(valor1, valor2);

    printf("\nO resto de %i dividido por %i = %i\n", valor1, valor2, resultado);

}

int ex03B(int valor1, int valor2)
{
    if( valor1 < valor2)
    {
        return valor1;
    }
    else
    {
        return ex03B(valor1-valor2, valor2);
    }
}

