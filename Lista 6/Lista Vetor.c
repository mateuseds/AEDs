#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

float *leVetor(int);
void imprimeVetor(float *, int, char *); 


void ex01() {

    // 1 Elaborar um programa que leia um vetor A com 15 elementos inteiros.
    // Construir um vetor B do mesmo tipo, em que cada elemento de B deva ser o resultado do somatorio 
    // (de 1 ate o valor correspondente de cada elemento da matriz A). Apresentar A e B. 

    int A[15], B[15];

    for (int i = 0; i < 15; i++) {
        printf("Digite alguns valores: ");
        scanf("%i", &A[i]);
    }

    printf("\nValores ");
    for (int i = 0; i < 15; i++) {
        printf("\n%i", A[i]);
    }

    for (int i = 0; i < 15; i++) {
        B[i] = 0;
        for (int j = 0; j <= A[i]; j++) {
            B[i] += j;
        }
    }

    printf("\nSomatoria dos Valores");
    for (int i = 0; i < 15; i++) {
        printf("\n%i", B[i]);
    }
}


void ex02() {

    // 2 Construir um programa que leia dois vetores A e B com 10 elementos quaisquer inteiros. Construir um vetor C,
    // sendo este o resultado da uniao dos elementos de A e B – sem repeticao. Apresentar C.

    int A[10], B[10], C[20];
    
    for (int i = 0; i < 20; i++) {
        C[i] = 0;
    }

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor para A: ");
        scanf("%i", &A[i]);
        int bool = 0;
        for (int j = 0; j < 10; j++) {
            if (A[i] == A[j] && j != i) {
                bool = 1;
                }
        }

        for (int l = 0; l < 20; l++) {
            if (C[l] == 0 && bool == 0) {
                C[l] = A[i];
                break;
            }
        }
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor para B: ");
        scanf("%i", &B[i]);
    }

    for (int i = 10; i < 20; i++) {
        C[i] = 0;
    }

    for (int i = 0; i < 10; i++) {
        int aux = 0;
        for (int k = 0; k < 10; k++) {
            if (B[i] == A[k]) {
                aux = 1;
                break;
            }
        }
        if (aux == 0) {
            for (int l = 0; l < 20; l++) {
                if (C[l] == 0) {
                    C[l] = B[i];
                    break;
                }
            }
        }
    }

    printf("\nC = ");
    for (int i = 0; C[i] != 0 && i < 20; i++) {
        printf("%i ", C[i]);
    }
}


void ex03() {

    // 3 Elaborar um programa que preencha com 20 valores aleatorios do tipo real em um vetor A, em seguida crie um
    // procedimento que inverta os elementos armazenados. Ou seja, o primeiro elemento de A passara a ser o ultimo, o
    // segundo elemento passara a ser o penultimo e assim por diante. Apresentar A. 

    int temp;
    float A[20];
    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        A[i] = rand() / 100.0;
    }

    printf("\nValores aleatorios:");
    for (int i = 0; i < 20; i++) {
        printf("\n%i = %i ", i, A[i]);
    }
    printf("\n");
    for (int i = 0; i < 20 / 2; i++) {
        temp = A[i];
        A[i] = A[20 - i - 1];
        A[20 - i - 1] = temp;
    }

    printf("\nValores invertidos:");
    for (int i = 0; i < 20; i++) {
        printf("\n%i = %.2f ", i, A[i]);
    }
}


void ex04() {

    // 4 Elaborar um programa que preencha com 100 elementos do tipo inteiro em um vetor A valores aleatorios entre 1 e 10.
    // Crie um vetor frequencia 10 posicoes e armazene a quantidade de vezes que os elementos de A apareceram no vetor frequencia 

    int a[100], frequencia[10], randArray;
    srand(time(NULL));
    printf("\nValores aleatorios: ");
    for (int i = 0; i < 100; i++) {
        randArray = rand() % 10;
        a[i] = randArray + 1;
        printf("%i, ", a[i]);
    }

    for (int i = 0; i < 10; i++) {
        frequencia[i] = 0;
    }

    for (int i = 0; i < 100; i++) {
        frequencia[a[i] - 1]++;
    }

    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("\nFrequencia %i: %i", i + 1, frequencia[i]);
    }
}


void ex05() {

    // 5 Elaborar um programa que preencha com valores aleatorios 10 elementos do tipo inteiro em um vetor A. Ordene e imprima o vetor A.

    int a[10], temp = -1, b[10], temp2;
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        a[i] = rand();
        b[i] = a[i];
        printf("%i, ", b[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {
            if (b[j] != -1 && (b[j] <= temp || temp == -1)) {
                temp = b[j];
                temp2 = j;
            }
        }

        b[temp2] = -1;

        a[i] = temp;
        temp = -1;
    }

    for (int i = 0; i < 10; i++) {
        printf("\n%i, ", a[i]);
    }
}

// 6 Construa uma funcao que retorne um vetor real (utilize alocacao dinamica de memoria), 
// com valores aleatorios entre 30 e 50 (intervalo fechado), de tamanho N – passe o tamanho N por valor. 
// Construa um procedimento para imprimir um vetor real de tamanho N – passe o vetor e o tamanho N por valor 
// (utilize a passagem de ponteiro representando o vetor a ser impresso)
// Escrever um programa que leia um valor e chame a funcao e o procedimentos criados.


float *leVetor(int tamanho)
{
    float *v;
    v = malloc(sizeof(float) * tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um ou mais valores para o vetor: ");
        scanf("%f", &v[i]);
    }
    return v;
}

void imprimeVetor(float *v, int tamanho, char *nomeVetor)
{
    int i;
    for (int i = 0; i < tamanho; i++)
    {
        printf("Vetor %s: Indice %i = %.2f\n", nomeVetor, i, v[i]);
    }
}

void ex06() {
    float *A;
    int tamanhoVetor;
    printf("Digite quantos termos o vetor vai ter: ");
    scanf("%i", &tamanhoVetor);
    A = leVetor(tamanhoVetor);
    printf("\n");
    imprimeVetor(A, tamanhoVetor, "A");
    free(A);
    A = NULL;

    return 0;
}


int main()
{
    int ex;
    printf("Escolha o exercicio: ");
    scanf("%i", &ex);
    fflush(stdin);

    switch (ex)
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

        default:
            printf("Erro. Insira de 01 - 06 para escolher o exercicio");
            break;
    }
}
