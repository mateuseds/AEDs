#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ex07(int matriz[10][10]) {

    // 7 Preencher uma matriz de 10 x 10 posicoes com valores aleatorios de 15 a 50 (utilize para cada numero a funcao rand
    // faca uma funcao que dados os valores inicial e final devolva um numero aleatorio dentro deste intervalo)
    // Em seguida imprima os indices (i, j) da matriz e o valor correspondente, na forma de matriz.

    printf("\nExercicio 07\n");
    srand(time(NULL));

      for (int i = 0; i < 10; i++)
      {
        for (int j = 0; j < 10; j++)
        {
          matriz[i][j] = (rand() % 36) + 15;
        }
      }

      for (int i = 0; i < 10; i++)
      {
        for (int j = 0; j < 10; j++)
        {
          printf(" %i-%i: %i  ", i, j, matriz[i][j]);
        }
        printf("\n");
      }
    }

void ex08(int matriz[10][10]) {

    // 8 Escreva um procedimento que receba a matriz criada no exerciício acima (passagem de parametro),
    // imprimir o maior e o menor elemento da matriz bem como a posicao de cada um.

    printf("\nExercicio 08\n");
    int maior, menor, maiorPosicaoX, menorPosicaoX, maiorPosicaoY, menorPosicaoY;
    maior = matriz[0][0];
    menor = matriz[0][0];
    maiorPosicaoX = 0;
    maiorPosicaoY = 0;
    menorPosicaoX = 0;
    menorPosicaoY = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matriz[i][j] <= menor) {
                menor = matriz[i][j];
                menorPosicaoX = i;
                menorPosicaoY = j;
            }
            else if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                maiorPosicaoX = i;
                maiorPosicaoY = j;
            }
        }
    }
    printf("O maior: %i, esta na linha %i, coluna %i\nO menor: %i, esta na linha %i, coluna %i\n", maior, maiorPosicaoX, maiorPosicaoY, menor, menorPosicaoX, menorPosicaoY);
}

void ex09(int matriz[10][10]) {

  // 9 Escreva um procedimento que receba a matriz do exercicio 7 e imprima a soma dos elementos da diagonal.

    printf("\nExercicio 09\n");
    int somaDiagonal = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
          if (i == j) {
              somaDiagonal += matriz[i][j];
          }
        }
    }

    printf("A soma na diagonal = %i\n", somaDiagonal);
}

void ex10(int matriz[10][10]) {

    // 10 A partir do exercicio numero 1, peca ao usuario a posicao [i, j] da matriz,
    // e em seguida exiba o valor que esta na matriz nesta posicao. FLAG -1

    printf("\nExercicio 10 (Digite ' -1 ' como indice para encerrar)\n");
    int i, j;
    do {
        printf("Digite a linha desejada: ");
        scanf("%i", &i);
        printf("Digite a coluna desejada: ");
        scanf("%i", &j);

        while (i > 10 || j > 10 || i < -1 || j < -1) {
            printf("\nIndice invalido\n");
            printf("Digite a linha desejada: ");
            scanf("%i", &i);
            printf("Digite a coluna desejada: ");
            scanf("%i", &j);
        }

        printf("Valor presente nos indices inseridos: %i\n", matriz[i][j]);
    } while (i != -1 && j != -1);
}

void ex11(int matriz[10][10]) {

    // 11. Escreva um procedimento que receba a matriz do exercicio 7 A partir do exercicio numero 1, 
    // peca um numero qualquer e verifique se o numero esta ou nao na matriz. 
    // Se estiver imprima a posicao deste numero e se nao estiver imprima a mensagem valor nao encontrado.

    printf("\nExercicio 11\n");
    int numero, seletor = 0;
    printf("Digite um numero para verificar se ele esta na matriz: ");
    scanf("%i", &numero);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matriz[i][j] == numero) {
                printf("Seu numero esta na linha %i e coluna %i\n", i, j);
                seletor++;
            }
        }
    }

    if (seletor == 0) {
        printf("Valor nao encontrado na matriz");
    }
}


int main() {
    int matriz[10][10];
    ex07(matriz);
    ex08(matriz);
    ex09(matriz);
    ex10(matriz);
    ex11(matriz);
    return 0;
}
