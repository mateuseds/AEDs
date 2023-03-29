#include <stdio.h>

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
int ex11();
int ex12();
int ex13();
int main() {
    int op;
    printf("Aluno: Mateus Estevao de Souza / Matricula: 771697\n");
    printf("Escolha um exercicio:\n");
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
    printf("12. Digitação de idades com for e do-while\n");
    printf("13. Soma de valores digitados com for e while\n");
    printf("0. Sair\n");

    scanf("%d", &op);

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
        case 11:
            ex11();
            break;
        case 12:
            ex12();
            break;
        case 13:
            ex13();
            break;
        default:
            printf("Opcao invalida\n");
            return 0;
    }
}
            int ex01(){
                int n, soma = 0, numero;
                printf("Digite a quantidade de números a serem somados: ");
                scanf("%d", &n);
                for(int i=1; i<=n; i++) {
                    printf("Digite o %dº número: ", i);
                    scanf("%d", &numero);
                    soma += numero;
                }

                printf("A soma dos números é: %d\n", soma);
                return 0;
            }

            int ex02(){
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
                 return 0;
            }

            int ex03(){
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
                 return 0;
            }

            int ex04(){
                int i = 1;
                while(1) {
                    if(i % 5 == 0) {
                        printf("%d ", i);
                    }
                    i++;
                }
                 return 0;
            }

            int ex05(){
                int idade = 0;

                while(idade <= 0 || idade > 140) {
                    printf("Digite sua idade: ");
                    scanf("%d", &idade);
                    if(idade <= 0 || idade > 140) {
                        printf("Idade inválida. Tente novamente.\n");
                    }
                }

                printf("Sua idade é: %d\n", idade);
                 return 0;
            }

            int ex06(){
                int n, primeiro = 1, segundo = 1, proximo;
                printf("Digite o valor de N: ");
                scanf("%d", &n);

                for(int i=3; i<=n; i++) {
                    proximo = primeiro + segundo;
                    primeiro = segundo;
                    segundo = proximo;
                }

                printf("O %dº termo da sequência de Fibonacci é: %d\n", n, segundo);
                 return 0;
            }

            int ex07(){
                int n;
                printf("Digite o número de elementos da sequência: ");
                scanf("%d", &n);

                printf("Sequência: ");
                for(int i=1; i<=n; i++) {
                    printf("%d ", 2*i-1);
                }
                 return 0;
            }

            int ex08(){
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
                 return 0;
            }

            int ex09(){
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
                 return 0;
            }

            int ex10(){
                int valor, soma = 0;

                do {
                    printf("Digite um valor (ou 0 para encerrar): ");
                    scanf("%d", &valor);
                    soma += valor;
                } while (valor != 0);

                printf("A soma dos valores digitados é: %d", soma);
                 return 0;
            }

            int ex11(){
            int num;
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
            }

            int ex12(){
            int idade;
            for (;;) { // laço infinito
                printf("Digite uma idade: ");
                scanf("%d", &idade);
                if (idade > 0) {
                    printf("Idade digitada: %d\n", idade);
                }
            }

            --------

            int idade;
            while (1) { // laço infinito
                printf("Digite uma idade: ");
                scanf("%d", &idade);
                if (idade > 0) {
                    printf("Idade digitada: %d\n", idade);
                }
            }
            return 0;
            }

            int ex13(){
            int num, soma = 0;
            for (;;) { // laço infinito
                printf("Digite um valor (ou 0 para sair): ");
                scanf("%d", &num);
                soma += num;
                if (num == 0) {
                }
            }
            printf("Soma dos valores digitados: %d\n", soma);


            --------
            int num, soma = 0;
            while (1) { // laço infinito
                printf("Digite um valor (ou 0 para sair): ");
                scanf("%d", &num);
                soma += num;
                if (num == 0) {
                }
            }
            printf("Soma dos valores digitados: %d\n", soma);
            return 0;
            }
