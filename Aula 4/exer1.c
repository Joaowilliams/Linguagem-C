#include <stdio.h>

int main() {

    int valor_inicial, valor_final;

    printf("Qual o valor inicial  ");
    scanf("%d", &valor_inicial);

    printf("Qual o valor final  ");
    scanf("%d", &valor_final);

    for (int contador = valor_inicial; contador <= valor_final; contador++ ) {
        printf("%d ", contador);
    }

    return 0;
}