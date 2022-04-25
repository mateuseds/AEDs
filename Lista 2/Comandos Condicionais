#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <math.h>
#include <locale.h>

int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();
int main()
{
    int op;
    printf("escolha:\n");
    printf("1 - exercicio 01\n");
    printf("2 - exercicio 02\n");
    printf("3 - exercicio 03\n");
    printf("4 - exercicio 04\n");
    printf("5 - exercicio 05\n");
    printf("6 - exercicio 06\n");
    printf("7 - exercicio 07\n");
    printf("8 - exercicio 08\n");
    printf("9 - exercicio 09\n");
    printf("10 - exercicio 10\n");
    scanf("%i",&op);
    switch (op)
    {
    case 1:
        ex01();
        break;
    case 2:
        ex02();
        break;
    case 3:
        ex03();
        break;
    case 4:
        ex04();
        break;
    case 5:
        ex05();
        break;
    case 6:
        ex06();
        break;
    case 7:
        ex07();
        break;
    case 8:
        ex08();
        break;
    case 9:
        ex09();
        break;
    case 10:
        ex10();
        break;
    default:
        printf("Invalido\n");
        return 0;
    }
}


// -------------------------------------------------- LISTA 2 AEDs --------------------------------------------------

// 1. Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar.

#include<stdio.h>
#include<math.h>

int ex01() {

int numeroint;
scanf("%d",&numeroint);

if ( numeroint % 2 == 0){
printf("NUMERO PAR\n");
}
else if ( numeroint % 2 != 0){
printf("NUMERO IMPAR\n");
}

return 0;
}

// Entrada: 5 
// Saida: NUMERO IMPAR


______________________________________________________________________________________________

// 2. Fazer um algoritmo peça o nome e as 3 notas de um aluno e mostre, além do nome e do valor da media do aluno, uma mensagem de "Aprovado", caso a media seja igual ou superior a 6, ou a mensagem "reprovado", caso contrario.

#include<stdio.h>
#include<math.h>

int ex02() {

float nota1,nota2,nota3,media;
scanf("%f",&nota1);
scanf("%f",&nota2);
scanf("%f",&nota3);

media=(nota1+nota2+nota3)/3;

if (media >= 6.00){
printf("MEDIA = %.2f\n",media);
printf("APROVADO\n");
}
else if ( media < 6.00){
printf("MEDIA = %.2f\n",media);
printf("REPROVADO\n");
}

return 0;
}

// Entradas: 7, 7, 2
// Saidas: 5.33 REPROVADO

______________________________________________________________________________________________

// 3. Fazer um algoritmo que leia a temperatura da água e mostre se está no estado solido, líquido ou gasoso.

#include<stdio.h>
#include<math.h>

int ex03() {

int temperatura;
scanf("%d",&temperatura);

if ( temperatura <= 0){
printf("SOLIDO\n");
}
else if ( temperatura < 100){
printf("LIQUIDO\n");
}
else if (temperatura >= 100){
printf("GASOSO\n");
}

return 0;
}

// Entradas: -70, 7, 700,
// Saidas: SOLIDO, LIQUIDO, GASOSO

______________________________________________________________________________________________

// 4. Leia um valor X e se ele for menor que 0 avalie Y = x2 + 4. Se ele for maior que 0 avalie x3 -3 e se ele for igual a 0 de uma mensagem de erro.

#include<stdio.h>
#include<math.h>

int ex04() {

int variavel,funcao1,funcao2;
//variavel = X
scanf("%d",&variavel);

funcao1=(variavel*2)+4;

funcao2=(variavel*3)-3;

if (variavel < 0){
printf("Y=%d\n",funcao1);
}
else if (variavel > 0){
printf("Y=%d\n",funcao2);
}
else if (variavel == 0){
printf("ERRO\n");
}

return 0;
}

// Entradas: 2, -65, 0
// Saidas: Y = 3, Y = -126, ERRO

______________________________________________________________________________________________

// 5. Construa um algoritmo que receba como entrada três valores (A,B e C). Após o processamento o menor valor deverá estar em A e o maior valor em C, e o valor intermediário em B. Imprima A,B e C.

#include <stdio.h>
#include<math.h>

int ex05() {
    int A,B,C,temp;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);

    if (A < B) {
        if(B < C){
            //está ordenado
        }
        else if (A < C){
            temp=B;
            B=C;
            C=temp;
        } else {
            temp=A;
            A=C;
            C=B;
            B=temp;
        }
    } else {
        if (A < C) {
            temp=A;
            A=B;
            B=temp;
        }
        else if (C < B) {
            temp=A;
            A=C;
            C=temp;

        } else {
            temp=A;
            A=B;
            B=C;
            C=temp;
        }
    }
    printf("CORRETO\n %d %d %d\n",A,B,C);
    return 0;
}

// Entradas: 1, 2, 3
// Saidas: 1, 2, 3

// Entradas: 1, 3, 1
// Saidas: 1, 2, 3

// Entradas: 2, 1, 3
// Saidas: 1, 2, 3

// Entradas: 2, 3, 1
// Saidas: 1, 2, 3

// Entradas: 3, 2, 1
// Saidas: 1, 2, 3

// Entradas: 3, 1, 2
// Saidas: 1, 2, 3


______________________________________________________________________________________________

// 6. Desenvolver um algoritmo que leia três números inteiros: X, Y, Z  e verifique se o número X é divisível por Y e por Z. O algoritmo deverá mostrar as possíveis mensagens:
// - o número é divisível por Y e Z.
// - o número é divisível por Y mas não por Z.
// - o número é divisível por Z mas não por Y.
// - o número não é divisível nem Y nem por Z.

#include <stdio.h>
#include<math.h>

int ex06() {
    int x, y, z;
    printf("Valor de X:");
    scanf("%i", &x);
    printf("Valor de Y:");
    scanf("%i", &y);
    printf("Valor de Z:");
    scanf("%i", &z);

    if (x % y == 0 && x % z == 0){
        printf("o numero e divisivel por %i e %i",y,z);
    }
    if (x % y == 0 && x % z != 0){
        printf("o numero e divisivel por %i mas nao por %i",y,z);
    }
    if (x % z == 0 && x % y != 0){
        printf("o numero e divisivel por %i mas nao por %i",z,y);
    }
    if (x % y != 0 && x % z != 0){
        printf(" o numero nao e divisivel nem %i nem por %i.",y,z);
    }
    return 0;
}

//     Entrada:
//     Valor x: 10
//     Valor y: 2
//     Valor z: 5
//     Saida:  numero e divisivel por 2 e 5

//     Entrada:
//     Valor x: 20
//     Valor y: 15
//     Valor z: 2
//     Saida:o numero e divisivel por 2 mas nao por 15

______________________________________________________________________________________________

// 7. O numero 3025 possui a seguinte característica:
// 30 + 25 = 55
// 55^2 = 3025
// Fazer um algoritmo que dado um numero de 4 dígitos (verifique se o número pertence a faixa calcule e escreva se ele possui ou não esta característica)

#include <stdio.h>
#include<math.h>

int ex07() {
    int variavel, parte1, parte2, soma, potencia;
    scanf("%d",&variavel);
    if (variavel < 1000 || variavel > 9999 ) {
        printf("O numero deve ter 4 digitos\n");
        return 0;
    }
    parte1 = variavel / 100;
    parte2 = variavel % 100;
    printf("%d %d\n",parte1, parte2);

    soma = parte1 + parte2;
    potencia = soma * soma;
    printf("%d^2=%d\n",soma, potencia);
    if (potencia == variavel ) {
        printf("\nO numero %d, possui a seguinte caracteristica:\n",variavel);
        printf("%d + %d = %d\n",parte1, parte2,soma);
        printf("%d^2=%d\n",soma, potencia);
    } else {
        printf("\nO numero %d, nao possui a caracteristica do numero 3025\n",variavel);
        printf("Caracteristica: 3025\n30+25=55\n55^2=3025\n");
    }


    return 0;
}

// Entrada: 4413
// Saida: O numero 4413, nao possui a caracteristica do numero 3025 | Caracteristica: 3025 | 30+25=55 | 55^2=3025

______________________________________________________________________________________________

// 8. - ler um código do teclado e  mostrar o nome correspondente, de acordo com a lista : 
// 221 Bernardo 
// 211 Eustáquio 
// 311 Luiz 
// 312 Mário 
// 332 Artur

int ex08() {
    int codigo;
    printf("Escreva um dos codigos: 221, 211, 311 , 312, 332\n");
    scanf("%i",&codigo);

    switch (codigo) {
        case 221:
            printf("Bernardo\n");
            break;
        case 211:
            printf("Eustaquio\n");
            break;
        case 311:
            printf("Luiz\n");
            break;
        case 312:
            printf("Mario\n");
            break;
        case 332:
            printf("Artur\n");
            break;
            
        default:
            printf ("Codigo Invalido");
    }
    return 0;
}


// Entrada: 221
// Saida: Bernardo

// Entrada: 332
// Saida: Artur


______________________________________________________________________________________________

// 9. Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor. Exemplo:929, 44, 97379. Fazer um algoritmo que dado um numero de 5 dígitos; calcule e escreva se este e ou não palíndromo.

#include<stdio.h>
#include<math.h>

int ex09(){

    int p1,p2,p3,p4,p5,numero,aux, inverter;
    scanf("%d",&numero);
    if (numero < 10000 || numero > 99999 ) {
        printf("O numero deve ter 5 digitos\n");
        return 0;
    }

    p1 = numero / 10000;
    aux = numero % 10000;
    p2 = aux / 1000;
    aux = aux % 1000;
    p3 = aux / 100;
    aux = aux % 100;
    p4 = aux / 10;
    p5 = aux % 10;
    inverter = (p5 * 10000) + (p4 * 1000) + (p3 * 100) + (p2 * 10) + p1;

    if (numero == inverter){
        printf("O NUMERO E PALINDROMO\n");
    }else {
        printf("O NUMERO NAO E PALINDROMO\n");
    }

    return 0;
}

// Entradas: 42442
// Saida: O NUMERO NAO E PALINDROMO

______________________________________________________________________________________________

// 10. Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. O custo da água varia dependendo do tipo do consumidor - residencial, comercial ou industrial. A regra para calcular a conta e:
// • Residencial: R$ 75,00 de taxa mais R$ 3,50 por m3 gastos;
// • Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 5,50 por m3 gastos acima dos 80 m3;
// • Industrial: R$ 800,00 para os primeiros 100 m3 gastos mas R$ 8,00 por m3 gastos acima dos 100 m3;
// O algoritmo devera ler a conta do cliente,  seu tipo (residencial, comercial e industrial) e o seu consumo de água em metros cubos. 

#include<stdio.h>
#include<math.h>

int ex10()
{
    int opcao = -1;

    while(opcao != 0){
        float metros = 0.0f;
        float valor = 0.0f;
        printf("\nInforme a quantidade de metros cubicos: ");
        scanf("%f", &metros);
        printf("\n\nEscolha uma opcao: \n0- Exit\n1- Residencial\n2- Comercial\n3- Industrial\n\nOpcao desejada => ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                //Residencial: R$75,00 de taxa mais R$3,50 por m³ gastos;
                valor += 75.00 + (3.50 * metros);
                printf("Residencial\n");
                break;
            case 2:
                //Comercial: R$500,00 para os primeiros 80 m³ gastos mais R$5,50 por m³ gastos;
                if(metros > 0.0){
                    valor = 500.0;
                }
                if(metros > 80.0){
                    valor += 5.50 * (metros - 80.0);
                }
                printf("Comercial\n");
                break;
            case 3:
                //Industrial: R$800,00 para os primeiros 100 m³ gastos mais R$8,00 por m³ gastos;
                if(metros > 0.0){
                    valor = 800.0;
                }
                if(metros > 100.0){
                    valor += 8.00 * (metros - 100.0);
                }
                printf("Industrial\n");
                break;
        }
         if(opcao != 0){
            printf("Valor a pagar => R$ %.2f\n\n", valor);
            valor = 0.0f;
        }
    }
    return 0;
}

// Entrada: 120
// Saida: RESIDENCIAL VALOR A PAGAR => R$495.00 | COMERCIAL VALOR A PAGAR => R$720.00 | INDUSTRIAL VALOR A PAGAR => R$960.00
