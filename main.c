//-----------------------------------

// Davi Cesar martins e Silva

// 766486

//-----------------------------------

#include <stdio.h>

int main(void) {
  // Exercício 1
  /*
  int n, soma = 0, numero;
  printf("Digite a quantidade de números a serem somados: ");
  scanf("%d", &n);

  for(int i=1; i<=n; i++) {
      printf("Digite o %dº número: ", i);
      scanf("%d", &numero);
      soma += numero;
  }

  printf("A soma dos números é: %d\n", soma);
  */

  // Exercício 2
  /*
  int n, primeiro = 0, segundo = 1, proximo;
  printf("Digite o número de elementos da série de Fibonacci: ");
  scanf("%d", &n);

  printf("Série de Fibonacci: ");

  for(int i=0; i<n; i++) {
      if(i <= 1) {
          proximo = i;
      } else {
          proximo = primeiro + segundo;
          primeiro = segundo;
          segundo = proximo;
      }
      printf("%d ", proximo);
  }
  */

  // Exercício 3
  /*
  int l, primeiro = 0, segundo = 1, proximo = 0;
  printf("Digite o limite da série de Fibonacci: ");
  scanf("%d", &l);

  printf("Série de Fibonacci até %d: ", l);

  while(proximo < l) {
      if(proximo <= 1) {
          proximo = segundo;
      } else {
          proximo = primeiro + segundo;
          primeiro = segundo;
          segundo = proximo;
      }
      if(proximo < l) {
          printf("%d ", proximo);
      }
  }
  */

  // Exercício 4
  /*
  int i = 1;

  while(1) {
      if(i % 5 == 0) {
          printf("%d ", i);
      }
      i++;
  }
  */

  // Exercício 5
  /*
  int idade = 0;

  while(idade <= 0 || idade > 140) {
      printf("Digite sua idade: ");
      scanf("%d", &idade);
      if(idade <= 0 || idade > 140) {
          printf("Idade inválida. Tente novamente.\n");
      }
  }

  printf("Sua idade é: %d\n", idade);
  */

  // Exercício 6
  /*
  int n, primeiro = 1, segundo = 1, proximo;
  printf("Digite o valor de N: ");
  scanf("%d", &n);

  for(int i=3; i<=n; i++) {
      proximo = primeiro + segundo;
      primeiro = segundo;
      segundo = proximo;
  }

  printf("O %dº termo da sequência de Fibonacci é: %d\n", n, segundo);
  */

  // Exercício 7
  /*
  int n;
  printf("Digite o número de elementos da sequência: ");
  scanf("%d", &n);

  printf("Sequência: ");
  for(int i=1; i<=n; i++) {
      printf("%d ", 2*i-1);
  }
  */

  // Exercicio 8
  /*
  int n, contador = 0, num = 1;

  printf("Digite o valor de n: ");
  scanf("%d", &n);

  while (contador < n) {
    if ((num % 3 == 0 && num % 5 == 0) || num % 7 == 0) {
      printf("%d ", num);
      contador++;
    }
    num++;
  }
*/
  // Exercicio 9
  /*
    int n, contador = 0, num = 1, a, b, soma = 0;

  printf("Digite o valor de n: ");
  scanf("%d", &n);

  printf("Digite o valor de A: ");
  scanf("%d", &a);

  printf("Digite o valor de B: ");
  scanf("%d", &b);

  while (contador < n) {
    if (num > a && num < b && ((num % 3 == 0 && num % 5 == 0) || num % 7 == 0))
  { printf("%d ", num); soma += num; contador++;
    }
    num++;
  }

  printf("\nSoma dos valores: %d", soma);


  */
  // Exercicio 10
  /*
  int valor, soma = 0;

  do {
    printf("Digite um valor (ou 0 para encerrar): ");
    scanf("%d", &valor);
    soma += valor;
  } while (valor != 0);

  printf("A soma dos valores digitados é: %d", soma);

  */

  // Exercico 11
  /*int num;
    for (num = 0; ; num++) { // laço infinito
        if (num % 5 == 0) {
            printf("%d\n", num);
        }
    }

    --------

    int num = 0;
    do {
        if (num % 5 == 0) {
            printf("%d\n", num);
        }
        num++;
    } while (1); // laço infinito
    return 0;
  */

  // Exercicio 12
  /*
  Exercício com for:

    int idade;
    for (;;) { // laço infinito
        printf("Digite uma idade: ");
        scanf("%d", &idade);
        if (idade > 0) {
            printf("Idade digitada: %d\n", idade);
            break; // encerra o laço
        }
    }
    return 0;

Exercício com while:


    int idade;
    while (1) { // laço infinito
        printf("Digite uma idade: ");
        scanf("%d", &idade);
        if (idade > 0) {
            printf("Idade digitada: %d\n", idade);
            break; // encerra o laço
        }
    }
    return 0;

  */

  // Exercicio 13
  /*
  Exercício com for:


    int num, soma = 0;
    for (;;) { // laço infinito
        printf("Digite um valor (ou 0 para sair): ");
        scanf("%d", &num);
        soma += num;
        if (num == 0) {
            break; // encerra o laço
        }
    }
    printf("Soma dos valores digitados: %d\n", soma);
    return 0;

Exercício com while:


    int num, soma = 0;
    while (1) { // laço infinito
        printf("Digite um valor (ou 0 para sair): ");
        scanf("%d", &num);
        soma += num;
        if (num == 0) {
            break; // encerra o laço
        }
    }
    printf("Soma dos valores digitados: %d\n", soma);
    return 0;
  */
}