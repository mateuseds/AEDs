Nome: Mateus Estevão de Souza
Matrícula: 771697

#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("Escolha uma opção:\n");
        printf("1. Soma de n números\n");
        printf("2. Sequência de Fibonacci com n elementos\n");
        printf("3. Sequência de Fibonacci até limite l\n");
        printf("4. Múltiplos de 5\n");
        printf("5. Digitação de idade\n");
        printf("6. Enésimo termo da sequência de Fibonacci\n");
        printf("7. Sequência de n números ímpares\n");
        printf("8. Números que são múltiplos de 3 e/ou 5 e/ou 7 entre A e B\n");
        printf("9. Números que são múltiplos de 3 e/ou 5 e/ou 7 entre A e B e soma dos valores\n");
        printf("10. Soma de valores digitados\n");
        printf("11. Múltiplos de 5 com for e do-while\n");
        printf("12. Digitação de idades com for e while\n");
        printf("0. Sair\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                int n, soma = 0, numero;
    printf("Digite a quantidade de números a serem somados: ");
    scanf("%d", &n);
        for(int i=1; i<=n; i++) {
            printf("Digite o %dº número: ", i);
            scanf("%d", &numero);
            soma += numero;
        }

        printf("A soma dos números é: %d\n", soma);
                break;

            case 2:
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
        printf("\n");
                break;

            case 3:
                // lógica para sequência de Fibonacci até limite l
                break;

            case 4:
                // lógica para múltiplos de 5
                break;

            case 5:
                // lógica para digitação de idade
                break;

            case 6:
                // lógica para enésimo termo da sequência de Fibonacci
                break;

            case 7:
                // lógica para sequência de n números ímpares
                break;

            case 8:
                // lógica para números que são múltiplos de 3 e/ou 5 e/ou 7 entre A e B
                break;

            case 9:
                // lógica para números que são múltiplos de 3 e/ou 5 e/ou 7 entre A e B e soma dos valores
                break;

            case 10:
                // lógica para soma de valores digitados
                break;

            case 11:
                // lógica para múltiplos de 5 com for e do-while
                break;

            case 12:
                // lógica para digitação de idades com for e while
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}




    case 1: {
    
        break;
    }
    case 2: {
       
        break;
    }
    case 3: {
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
        printf("\n");
        break;
    }
    case 4: {
        int i = 1;

        while(1) {
            if(i % 5 == 0) {
                printf("%d ", i);
            }
            i++;
            if (i > 100) {
                break;
            }
        }
        printf("\n");
        break;
    }
    case 5: {
    int idade;
    
    do {
        printf("Digite uma idade valida (entre 0 e 140 anos): ");
        scanf("%d", &idade);
    } while (idade < 0 || idade > 140);
    
    printf("A idade digitada foi: %d\n", idade);

  
// 6 - Programa para calcular o N-ésimo termo da sequência de Fibonacci:

int main() {
  int n, anterior = 1, atual = 1, proximo;
  
  printf("Digite o valor de N: ");
  scanf("%d", &n);
  
  for (int i = 3; i <= n; i++) {
    proximo = anterior + atual;
    anterior = atual;
    atual = proximo;
  }
  
  printf("O %do termo da sequencia de Fibonacci e: %d\n", n, atual);
  
  return 0;
}

// 7 - Programa para mostrar na tela os n primeiros elementos da sequência 1, 3, 5, 7, 9,... n:

int main() {
  int n;
  
  printf("Digite o valor de N: ");
  scanf("%d", &n);
  
  for (int i = 1; i <= n; i++) {
    printf("%d ", 2 * i - 1);
  }
  
  printf("\n");
  
  return 0;
}

// 8 - Programa para mostrar na tela os n primeiros elementos da sequência do exercício anterior que forem divisíveis por três e múltiplos de cinco ou divisíveis por sete:

int main() {
  int n;
  
  printf("Digite o valor de N: ");
  scanf("%d", &n);
  
  for (int i = 1; i <= n; i++) {
    int num = 2 * i - 1;
    if ((num % 3 == 0 && num % 5 == 0) || num % 7 == 0) {
      printf("%d ", num);
    }
  }
  
  printf("\n");
  
  return 0;
}


// 9 - Mostrar somente os elementos maiores que A e menores que B na sequência do exercício anterior:

int main() {
    int n, i, num, a, b;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Os elementos maiores que A e menores que B são: ");

    for (i = 1; i <= n; i++) {
        num = (2 * i) - 1;

        if ((num > a) && (num < b) && ((num % 3 == 0 && num % 5 == 0) || num % 7 == 0)) {
            printf("%d ", num);
        }
    }

    return 0;
}

// 10 - Calcular a soma de valores fornecidos pelo usuário:

int main() {
    int num, soma = 0;

    do {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);

        soma += num;
    } while (num != 0);

    printf("A soma dos valores é %d\n", soma);

    return 0;
}