#include <stdio.h>

int main() {
    int numeros, soma = 0;

    printf("Quantos numeros voce vai digitar?  ");
    scanf("%d", &numeros);

    for (int contador = 1; contador <= numeros; contador++) {
    
        if (contador % 2 == 0) {
            soma = soma + contador;
        }
    }

    printf("Soma: %d\n", soma);

    return 0;
}