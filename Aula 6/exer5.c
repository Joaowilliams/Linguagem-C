#include <stdio.h>

void contar(int *pares, int *impares, int *positivos, int *negativos) {
    int numero;

    printf("Digite um numero:  ");
    scanf("%d", &numero);
    
    if (numero == 0) {
        return;

    }


    if (numero % 2 == 0) {
        (*pares)++;
    } else {
        (*impares)++;
    }

    if (numero > 0 ) {
        (*positivos)++;
    } else {
        (*negativos)++;
    }


    contar(pares, impares, positivos, negativos);
}


int main() {
    int pares = 0, impares = 0, positivos = 0, negativos = 0;


    contar(&pares, &impares, &positivos, &negativos);


    printf("\nQuantidade de pares: %d\n", pares);
    printf("Quantidade de ímpares: %d\n", impares);
    printf("Quantidade de positivos: %d\n", positivos);
    printf("Quantidade de negativos: %d\n", negativos);


    return 0;
}