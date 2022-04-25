//  Exercício 5.7 ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99]


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main() {
    int valor;
    printf("Qual o numero?\n");
    scanf("%i",&valor);
    if (valor >= 15 && valor <= 45) {
        printf("Pertence ao intervalo 15:45\n");
    } 
    if (valor >= 66 && valor <= 99) {
        printf("Pertence ao intervalo 66:99\n");
    };
    system("pause");
    return 0;
}

// TESTE
// Entrada: 30
// Saída: Pertence ao intervalo 15:45