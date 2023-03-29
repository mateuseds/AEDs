
10  int valor, soma = 0;

  do {
    printf("Digite um valor (ou 0 para encerrar): ");
    scanf("%d", &valor);
    soma += valor;
  } while (valor != 0);

  printf("A soma dos valores digitados é: %d", soma);

11 int num;
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

12 int idade;
    for (;;) { // laço infinito
        printf("Digite uma idade: ");
        scanf("%d", &idade);
        if (idade > 0) {
            printf("Idade digitada: %d\n", idade);
            break; // encerra o laço
        }
    }
    return 0;

    --------

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

  
13 int num, soma = 0;
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

    --------
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
