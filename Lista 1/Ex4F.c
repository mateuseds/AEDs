// Exercício 4f) Faça um algoritmo que peça ao usuário a base e a altura e calcule a área de um triangulo.


#include <stdio.h.>
#include <stdlib.h>
#include <math.h>

int main () {
    float baseTriangulo, alturaTriangulo, areaTriangulo;
    printf("Valor da base:\n");
    scanf("%f",&baseTriangulo);
    printf("Valor da altura:\n");
    scanf("%f",&alturaTriangulo);
    areaTriangulo = (baseTriangulo*alturaTriangulo)/2;
    prinf("A area é %f\n",areaTriangulo)    
    return 0;
}

// TESTE
// Entrada: (Base = 10) (Altura 5)
// Saída: 25



