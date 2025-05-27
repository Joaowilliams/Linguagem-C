#include <stdio.h>

int main() {

    int numeros[10];
    int i, menor, maior = 0;

    for (int i = 0; i <10; i++) {
        int numero;

        printf("Digite um numero:  ");
        scanf("%d", &numero);

        numeros[i] = numero;
    }

    for (int i = 0; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros [i];

        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

        printf("O maior valor e: %d\n", maior);
        printf("O menor valor e: %d\n", menor);

    return 0;
}