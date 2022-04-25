//  Exercício 5.15 ler um valor literal (caractere) do teclado e dizer se é uma letra maiúscula.


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main() {
    char letra;
    printf("Digite uma letra:\n");
    scanf("%s",&letra);
    if (isupper(letra)) {
        printf("A letra está maiuscula")
    } else {
        printf("Está minuscula")
    }
    return 0;
}

// TESTE
// Entrada: D
// Saída: A letra está maiuscula
