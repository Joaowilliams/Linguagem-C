#include <stdio.h>


int soma(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + soma(n - 1);

    }
}

int main() {
    int N;
    printf("Informe o valor de N:  ");
    scanf("%d", &N);

    int resultado = soma(N);
    printf("A soma dos %d primeiros numeros e: %d\n", N, resultado);


    return 0;
}