#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero  ");
    scanf("%d", &numero);

    printf("O numero %d e %s.\n", numero, (numero % 2 == 0) ? "par" : "impar");

    
    return 0;
}
