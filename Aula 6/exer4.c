#include <stdio.h>


int multiplicar(int a, int b) {
    if (b == 0) {
        return 0;
    } else if (b > 0) {
        return a + multiplicar(a, b - 1);
    } else {

        return - multiplicar(a, -b);
    }
}

int main() {
    int a,b;

    printf("Informe o valor de a  ");
    scanf("%d", &a);

    printf("Informe o valor de b  ");
    scanf("%d", &b);

    int resultado = multiplicar(a, b);
    printf("O produto e = %d\n  ", resultado);


    return 0;
}