#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>


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
int main() {
    int op;
    printf("TERCEIRA LISTA AEDS\n\n");
    printf("Escolha:\n");
    printf("1 - Exercicio 01\n");
    printf("2 - Exercicio 02\n");
    printf("3 - Exercicio 03\n");
    printf("4 - Exercicio 04\n");
    printf("5 - Exercicio 05\n");
    printf("6 - Exercicio 06\n");
    printf("7 - Exercicio 07\n");
    printf("8 - Exercicio 08\n");
    printf("9 - Exercicio 09\n");
    printf("10 - Exercicio 10\n");
    scanf("%i",&op);
    switch (op) {
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
            printf("Opcao invalida\n");
        return 0;
    }
}

// -------------------------------------------------- LISTA 3 AEDs --------------------------------------------------

// 1 - Faca um algoritmo que leia um conjunto de numeros (X) e imprima a quantidade de numeros pares (QPares) e a quantidade de numeros impares (QImpares) lidos. 
// Admita que o valor 9999 e utilizado como sentinela (FLAG) para fim de leitura. Ex.: 1,2,3,4,5,9999 => Pares=2 Impares=3


int ex01() {
    int variavel, numPar, numImpar;
    printf("\n(Caso deseje parar o algoritmo digite 9999) Digite um numero:\n\n");
    scanf("%i",&variavel);

    numPar = 0;
    numImpar = 0;

    while (variavel != 9999) {
        if (variavel % 2 == 0)
        {
            numPar = ++numPar ;
        }
        else
        {
            numImpar = ++numImpar;
        }
            printf("\n(Caso deseje parar o algoritmo digite 9999) Digite um numero:\n\n");
            scanf("%i",&variavel);
    }

    printf("\nQuantidade de numeros pares = %i \n\nQuantidade de numeros Impares = %i\n\n",numPar,numImpar);

    return 0;
}

// TESTE
// ENTRADA: 8, 4, 6, 5
// SAIDA: "Quantidade de numeros pares = 3" | "Quantidade de numeros impares = 1"





// _____________________________________________________________________________________________________________________

// 2 - Faca um programa que leia um conjunto indeterminado de numeros inteiros positivos e imprima o maior, o menor e a media aritmetica desse conjunto de dados. (Flag -1). 
// Execute este programa para os seguintes valores
// 1.1,2,3,-1
// 2.3,2,1,-1
// 3.1,3,2,-1


int ex02() {
    int variavel, maior, menor, soma, quantidade;
    float media;

    printf("\nDigite alguns numeros:\n\n");
    scanf("%i", &variavel) ;

    maior = variavel; 
    menor = variavel; 
    soma = 0;
    quantidade = 0;

    while (variavel  != -1) {
        quantidade = ++quantidade;
        soma = soma + variavel; 

        if (variavel > maior)
        {
            maior = variavel; 
        }

        if (variavel < menor)
        {
            menor = variavel; 
        }

        printf("\nCaso deseje parar o algoritmo digite -1\n\n");
        scanf("%i", &variavel) ;
    }

    media = soma / quantidade;

    printf("\nMaior:%i \nMenor:%i \nMedia:%i\n", maior, menor, media);

    return 0;
}

// TESTE
// ENTRADA: 5, 4, 3
// SAIDA: "Maior:5 | Menor:3 | Media:0"




// _____________________________________________________________________________________________________________________

// 3 - Escrever um algoritmo em Portugol, para calcular e imprimir o fatorial de um numero lido do teclado.
// Ex. Fatorial de 5! = 5x4x3x2x1=120

int ex03() {
    int variavel, temp, fatorial;
    printf("\nDigite um valor para calculo de fatorial: \n\n");
    scanf("%i",&variavel);

    temp = variavel;
    fatorial = variavel;

    while(variavel != 1) {
        variavel = variavel - 1;
        fatorial = fatorial * (variavel);
    }

    printf("\nO fatorial de %i = %i\n\n",temp,fatorial);

    return 0;
}

// TESTE
// ENTRADA: 7
// SAIDA: "O fatorial de 7 = 5040"


// _____________________________________________________________________________________________________________________

// 4 - Calcule o valor da seguinte serie lido a quantidade de termos:
// S= 1 - 1/3^3 +1/5^3 -1/7^3 +1/9^3...

int ex04() {
    int termos;
    double s = 0;
    printf("Digite o numero de termos: ");
    scanf("%d", &termos);

    for (int i = 0; i < termos; i++) {
        s = s + pow((-1), i) / (pow((2 * i + 1), 3));
    }

    printf("Com 2 termos o resultado = %f", s);
    return 0;
}

// TESTE
// ENTRADA: 2
// SAIDA: "Com 2 termos o resultado = 0.962963"


// _____________________________________________________________________________________________________________________

// 5 - A serie de fibonacci e formada pela sequencia: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// Escreva um algoritmo que peca um numero N maior que 2. Gere e imprima a serie ate este n-esimo termo.

int ex05() {
    int num1, num2, num3, variavel, termos;
    printf("\nFibonacci: Digite um numero maior que 2\n\n");
    scanf("%i",&termos);

    if (termos < 3) {
        printf("\nErro! O numero digitado deve ser maior que 2!\n\n");
    } else {
        num1 = 1;
        num2 = 1;
        variavel = 2;
        printf("\nA sequencia Fibonacci com %i termos = %i %i", termos, num1, num2);
        while(variavel < termos) {
            num3 = num1 + num2;
            printf(" %i",num3);
            num1 = num2;
            num2 = num3;
            variavel = variavel + 1;
    }
    }

    return 0;
}

// TESTE
// ENTRADA: 9
// SAIDA: "A sequencia Fibonacci com 9 termos = 1 1 2 3 5 8 13 21 34"


// _____________________________________________________________________________________________________________________

// 6 - Fazer um algoritmo para calcular o valor de s, dado por, sendo o valor de N  devera se lido do teclado
// S= +1/N -2/N-1 +3/n-2 -4/n-3+...N/1

int ex06() {
    int N;
    double s = 0;
    printf("Digite um valor: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        s = s + pow((-1), i) * (i + 1) / (N - i);
    }

    printf("O resultado final e: %f", s);
    return 0;
}

// TESTE
// ENTRADA: 2
// SAIDA: "Com 2 termos o resultado = -1.500000"


// _____________________________________________________________________________________________________________________

// 7 - Numeros palindromos sao aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor. 
// Exemplo:929, 44, 97379. 
// Fazer um algoritmo que imprima todos os numeros palindromos de 10000 a 99999.

int ex07() {
    int inicio, numX, posicao1, posicao2, posicao3, posicao4, posicao5, num1;
    inicio = 0;
    printf("\nDigite 1 para ver todos os numeros palindromos entre 10000 e 99999\n");
    scanf("%i",&inicio);

    printf("\nEntre os numeros 10000 e 99999 sao palindromos:\n\n");
    printf("[");

    numX=10000;

    while(numX <= 99999) {
        posicao5 = numX % 10;
        num1 = numX / 10;
        posicao4 = num1 % 10;
        num1 = num1 / 10;
        posicao3 = num1 % 10;
        num1 = num1 / 10;
        posicao2 = num1 % 10;
        num1 = num1 / 10;
        posicao1 = num1 % 10;

        if(posicao1 == posicao5 && posicao2 == posicao4){
            printf("%i, ", numX);
        }
        numX = numX + 1;
    }
    printf("]");
    printf("\n\n");
    return 0;
}

// TESTE
// ENTRADA: 1
// SAIDA: "Entre os numeros 10000 e 99999 sao palindromos: [imprimiu todos os numeros palindromos]"



// _____________________________________________________________________________________________________________________

// 8 - O numero 3025 possui a seguinte  caracteristica: 
// 30 + 25 = 55 
// 55^2 = 3025 
// Quantos e quais sao os numeros de 4 digitos possuem essa caracteristica?

int ex08() {
    int inicio, numX, num1, num2, num3;
    inicio = 0;
    printf("\nDigite 1 para executar\n");
    scanf("%i",&inicio);

    printf("\nOs numeros que possuem a mesma caracteristica que 3025 com 4 digitos sao:\n\n");

    numX = 1000;

    while(numX <= 9999) {
        num1 = numX / 100;
        num2 = numX % 100;
        num3 = pow(num1 + num2,2);

        if (numX == num3) {
            printf("%i ",numX);
        }
        numX = numX + 1;
    }
    return 0;
}

// TESTE
// ENTRADA: 1
// SAIDA: "Os numeros...: 2025 3025 9801"



// _____________________________________________________________________________________________________________________

// 9. Faca um programa para um jogo de cara ou coroa. Neste caso, o jogador escolhe cara ou coroa (0=cara e 1=coroa) mostre ao final de 10 tentativas,
// quantas foram certas e quantas erradas (utilize o comando "rand || srand" para que o computador escolha o resultado). 

int ex09() {
    int tentativas, roll, cara, coroa, escolha;
    printf("\nEscolha cara ou coroa (0 para cara e 1 para coroa): ");
    scanf("%i",&escolha);
    printf("\n");

    cara = 0;
    coroa = 0;

    if((escolha == 0) || (escolha == 1)) {
        for (tentativas = 0; tentativas < 10; tentativas++) {
            roll = rand() % 2;
            printf("%d ", roll);

            if(roll == 0) {
                cara = cara + 1;
            } else {
                coroa = coroa + 1;
            }
        }
        if(escolha == 0) {
            printf("\n\nA quantidade de acertos foi %i e erros foi %i\n\n",cara,coroa);
        } else {
            printf("\n\nA quantidade de acertos foi %i e erros foi %i\n\n",coroa,cara);
        }
    } else {
    printf("\nErro! Deve ser digitado '0' para cara ou '1' para coroa\n\n");
    }
    return 0;
}

// TESTE
// ENTRADA: 0
// SAIDA: "1 1 0 0 1 0 0 0 0 0 " | "A quantidade de acertos foi 7 e erros foi 3"


// _____________________________________________________________________________________________________________________

// 10. Faca um programa para adivinhar um numero escolhido pelo usuario, entre 1 e 1023. Indique ao final quantas tentativas foram necessarias. 
// O programa devera localizar o numero escolhido pelo usuario em no maximo 10 tentativas! Utilize a seguinte proposta. 
// Pegue o valor intermediario e pergunte ao usuario se o numero e igual(=), maior(>) ou menor(<) que o que foi escolhido. Se for (=) implica que acertou! 
// Se for maior escolha agora o numero intermediario entre o que foi perguntado e o ultimo, caso contrario escolha o intermediario entre o primeiro e o que foi perguntado, 
// seguindo assim ate acertar! Verifique que voce conseguira acertar qualquer numero em no maximo 10 tentativas!!!

int ex10() {
    float tentativa;
    int min, max, iniciar;
    char simbolo = 0;
    min = 1;
    max = 1023;
    iniciar = 0;
    srand(time(NULL));
    tentativa = rand() % max;

    printf("\nPense em um numero entre 1 e 1023 para a maquina tentar descobrir.\nDigite '1' para iniciar.\n");
    scanf("%i", &iniciar);

    if (iniciar = 1) {
    for (int i = 0; i < 10; i++) {
        if (simbolo != '=') {
            printf("\n\nO numero '%.0f' e igual, menor ou maior que o escolhido?\n(Responda com = ou < ou > )\n", tentativa);
            scanf(" %c", &simbolo);
            if (simbolo == '=') {
                printf("\nConsegui!\n");
            }
            else if (simbolo == '>') {
                min = tentativa;
                tentativa = rand() % (max - min - 1) + min + 1;
            }
            else if (simbolo == '<') {
                max = tentativa;
                tentativa = rand() % (max - min - 1) + min + 1;
            }
        }
    }
}
    return 0;
}

// TESTE
// ENTRADA: 1
// SAIDA: (a maquina descobriu o numero em 7 tentativas)
