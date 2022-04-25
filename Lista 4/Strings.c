#include <stdio.h>
#include <string.h>
#include <locale.h>
#define maxSize 100


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
    printf("LISTA STRING AEDS\n\n");
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


//--------------------------------------------------LISTA DE STRING-----------------------------------------------------

// 1 - Leia um conjunto indeterminado de palavras e ao final (estipule voce um flag) informe qual foi a maior palavra
// e a menor palavra digitada, em tamanho e lexicograficamente

int ex01() {
    char flag[] = "STA\0",
    palavra[maxSize],
    menorPalavra[maxSize],
    maiorPalavra[maxSize],
    menorPalavraLex[maxSize],
    maiorPalavraLex[maxSize];

    int tamanhoPalavra, tamanhoDaMenorPalavra, tamanhoDaMaiorPalavra;
    tamanhoPalavra = 0;
    tamanhoDaMenorPalavra = maxSize;
    tamanhoDaMaiorPalavra = 0;

    printf("Digite algumas palavras (Digite ''STA'' para executar)\n");
    scanf("%s", &palavra);
    strcpy(menorPalavraLex, palavra);
    strcpy(maiorPalavraLex, palavra);

    for (; strcmp(palavra,flag) != 0; scanf("%s", &palavra)) {

        //printf("\n%s\n", palavra);

        for (int i = 0; palavra[i] != 0; ++i) {
            tamanhoPalavra = i + 1;
        }

        if (tamanhoPalavra < tamanhoDaMenorPalavra) {
            strcpy(menorPalavra, palavra);
            tamanhoDaMenorPalavra = tamanhoPalavra;
        }

        if (tamanhoPalavra > tamanhoDaMaiorPalavra) {
            strcpy(maiorPalavra, palavra);
            tamanhoDaMaiorPalavra = tamanhoPalavra;
        }

        if (strcmp(palavra, menorPalavraLex) < 0) {
            strcpy(menorPalavraLex, palavra);
        }

        if (strcmp(palavra, maiorPalavraLex) > 0) {
            strcpy(maiorPalavraLex, palavra);
        }
    }

    printf("A menor palavra e '%s' contendo %d caracteres.\n", menorPalavra, tamanhoDaMenorPalavra);
    printf("A maior palavra e '%s' contendo %d caracteres.\n", maiorPalavra, tamanhoDaMaiorPalavra);
    printf("A primeira palavra em ordem alfabetica e '%s'\n", menorPalavraLex);
    printf("A ultima palavra em ordem alfabetica e '%s'\n", maiorPalavraLex);

    return 0;
}

// TESTE
// ENTRADA: caderno, tenis, mesa, garrafinha, pe
// SAIDA: A menor palavra e 'pe' contendo 2 caracteres.
// SAIDA: A maior palavra e 'garrafinha' contendo 10 caracteres.
// SAIDA: A primeira palavra em ordem alfabetica e 'caderno'
// SAIDA: A ultima palavra em ordem alfabetica e 'tenis'


//______________________________________________________________________________________________________________________

// 2 – Ler um string de no maximo 50 caracteres e contar quantas letras A essa palavra possui.

int ex02() {

    char frase[50];
    int i, contador;
    contador = 0;

    fflush(stdin);
    printf("Digite um conjunto de caracteres:");
    gets(frase);


    for(i=0; frase[i] != NULL ; i++) {
        if(frase[i] == 'A') {
        contador++;
        }
    }

    printf("A frase '%s' possui %i vezes a letra 'A'", frase, contador);

    return 0;
}

// TESTE
// ENTRADA: Francisco estava dormindo ontem a noite.
// SAIDA: A frase 'Francisco estava dormindo ontem a noite.' possui 0 vezes a letra 'A'


//______________________________________________________________________________________________________________________

// 3 – Ler uma string de no maximo 50 caracteres e indicar quais as posicoes da letra A nessa palavra.

int ex03() {
    char string[50];
    int i;

    fflush(stdin);
    printf("Digite um conjunto de caracteres:");
    gets(string);

    printf("\nAs posicoes que possuem 'A' nessa frase sao:");

    for(i=0; string [i] != NULL ; i++) {
        if(string[i] == 'A') {
            printf(" %i",i);
        }
    }

    printf("\n");

    return 0;
}

// TESTE
// ENTRADA: Francisco estava dormindo ontem a noite.
// SAIDA: As posicoes que possuem 'A' nessa frase sao:  .


//______________________________________________________________________________________________________________________

// 4 – Ler uma string de no maximo 50 caracteres e em seguida um caractere, mostrar quais as posicoes esse caractere
// aparece na string lida e quantas vezes ele apareceu.

int ex04() {
    char string[50],x;
    int i,contador;
    printf("Digite um conjunto de caracteres:");
    gets(string);

    fflush(stdin);
    scanf("%c",&x);

    contador = 0;

    printf("\nAs posicoes que possuem '%c' nessa frase sao:",x);

    for(i=0; string[i] != NULL ; i++)
    {
        if(string[i]==x)
        {
            contador++;
            printf(" %i",i);
        }
    }

    printf("\n\nO caractere '%c' apareceu %i vezes na frase: %s\n",x,contador,string);

    return 0;
}

// TESTE
// ENTRADA: Francisco estava dormindo ontem a noite.
// SAIDA: As posicoes que possuem 'F' nessa frase sao:  .
// SAIDA: O caractere 'F' apareceu 0 vezes na frase:  .


//______________________________________________________________________________________________________________________

// 5 - Ler uma string de no maximo 50 caracteres e em seguida um caractere
// (entre A e Z - consista se o caracteresta nesse intervalo),
// mostrar quais as posições esse caractere (maiuscula ou minuscula) na string lida e quantas vezes ele apareceu.

int ex05() {
    char string[50],x,y;
    int i,contador;
    printf("Digite um conjunto de caracteres:");
    gets(string);

    fflush(stdin);

    printf("Digite um caractere:");
    scanf("%c",&x);

    contador = 0;

    if(((x >= 'A') && (x<= 'z')) && ((x<=90) || (x>=97)))
    {
        printf("\nAs posicoes que possuem '%c' nessa frase sao:",x);

        for(i=0; string[i] != NULL ; i++)
        {
            if(string[i] == x || string [i]==(x-32))
            {
                printf(" %i",i);
                contador++;
            }
            else if(string[i] == x || string[i] == (x+32))
            {
                printf(" %i",i);
                contador++;
            }
        }
        if(x<=90)
        {
            printf("\n\nOs caracteres '%c' e '%c' apareceram %i vezes na frase: %s\n",x,x+32,contador,string);
        } else
        {
            printf("\n\nOs caracteres '%c' e '%c' apareceram %i vezes na frase: %s\n",x,x-32,contador,string);
        }
    }
    else
    {
        printf("\nDigite um caractere valido! Deve ser uma letra entre 'A' e 'z'.\n");
    }

    return 0;
}

// TESTE
// ENTRADA: Francisco estava dormindo ontem a noite.
// SAIDA: As posicoes que possuem 'F' nessa frase sao:  .
// SAIDA: Os caracteres 'F' e 'f' apareceram 0 vezes na frase:   .


//______________________________________________________________________________________________________________________

// 6 - Ler uma string de no maximo 50 caracteres e mostrar quantas letras possui e quantos caracteres são numeros e
// quantos não são nem numeros nem letras.

int ex06() {
    char string[50];
    int i,ql,qn,qnnl;
    fflush(stdin);
    printf("Digite um conjunto de caracteres:");
    gets(string);

    ql = 0;
    qn = 0;
    qnnl = 0;

    for(i=0; string[i] != NULL ; i++)
    {
        if((string[i]>=65 && string[i]<=90) || (string[i] >=97 && string[i] <=122))
        {
            ql = ql + 1;
        }
        else if(string[i]>=48 && string[i]<=57)
        {
            qn = qn + 1;
        }
        else
        {
            qnnl = qnnl + 1;
        }
    }

    printf("Letras:%i - Numeros:%i - != de letras e numeros:%i",ql,qn,qnnl);

    return 0;
}

// TESTE
// ENTRADA: Francisco estava dormindo ontem a noite.
// SAIDA: Letras:34 - Numeros:0 - != de letras e numeros:6


//______________________________________________________________________________________________________________________

// 7 – Ler uma string de no maximo 50 caracteres e criar uma nova string com seu inverso, isso é a ultima letra
// da primeira string será a primeira na nova string e assim sucessivamente.

int ex07() {
    char string[50];
    int i,aux,f,t;
    fflush(stdin);
    printf("Digite um conjunto de caracteres:");
    gets(string);

    t = strlen(string);

    f = t - 1;

    for(i = 0; i < t/2; i++)
    {
        aux = string[i];
        string[i] = string[f];
        string[f] = aux;
        f--;
    }

    printf("\nA string invertida e:%s\n",string);

    return 0;
}

// TESTE
// ENTRADA: Francisco estava dormindo ontem a noite.
// SAIDA: A string invertida e:.etion a metno odnimrod avatse ocsicnarF


//______________________________________________________________________________________________________________________

// 8 – Ler uma string de no maximo 50 caracteres e retire dessa string todos os espacos em branco.
// Utilize uma string auxiliar.

int ex08() {
    char string[50], string2[50];
    int l,i,p;

    fflush(stdin);
    printf("Forneca uma string com espacos em branco: ");
    gets(string);

    l = strlen(string);

    for (i,p; i < l; i++, p++)

    {
        if (string[p] == 32)
        {
            p++;
            string2[i] = string[p];
        }
    }

    printf("String sem espacos em branco: %s\n", string2);

    return 0;
}

// TESTE
// ENTRADA: Francisco estava dormindo ontem a noite.
// SAIDA: String sem espacos em branco:    .


//______________________________________________________________________________________________________________________

// 9 – Ler uma string de no maximo 50 caracteres e retire dessa string todos os espacos em branco.
// Sem utilize string auxiliar.

int ex09() {
    char string[50];
    int i,l,p;

    fflush(stdin);
    printf("Digite uma string:");
    gets(string);

    l = strlen(string);

    i = 0;
    p = 0;

    printf("%s\n", string);

    for (i,p; i < l; i++, p++)
    {
        if (string[p] == 32)
        {
            p++;
        }
        string[i] = string[p];
    }
    printf("String sem espacos em branco:%s\n", string);

    return 0;
}

// TESTE
// ENTRADA: Francisco estava dormindo ontem a noite.
// SAIDA: String sem espacos em branco:Franciscoestavadormindoontemanoite.


//______________________________________________________________________________________________________________________

// 10 - Ler uma string de no maximo 50 caracteres em seguida leia outra string de no maximo 3 caracteres, informe
// quantas vezes a segunda string aparece na primeira string, e diga as posicoes iniciais em que ela aparece.

int ex10() {
    setlocale(LC_ALL, "portuguese");
    char s[51], s2[4];
    int aux2 = 0;
    fflush(stdin);
    printf("Insira uma palavra de ate 50 caracteres: ");
    gets(s);
    printf("Insira uma palavra de ate 3 caracteres: ");
    gets(s2);
    for(int i = 0; s[i] != '\0'; i++){

        char aux[4] = "";

        for(int j = i; j-i != strlen(s2); j++){
            if(s[j] != '/0'){
                aux[j-i] = s[j];
            }else{
                break;
            }
        }
        if(strcmp(s2, aux) == 0){
            printf("A segunda string aparece na posicao %i.\n", i);
            aux2++;
        }
    }

    printf("A quantidade de vezes que a segunda string aparece dentro da primeira é: %i", aux2);
    return 0;
}

// TESTE
// ENTRADA: Francisco estava dormindo ontem a noite.
// ENTRADA: ava
// SAIDA: A segunda string aparece na posicao 13.
// SAIDA: A quantidade de vezes que a segunda string aparece dentro da primeira Ac: 1

