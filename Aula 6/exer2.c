#include <stdio.h>


void Decrescente (int n) {
    if ( n == 0 ) {
        return;
    }

    printf("%d", n);
    Decrescente ( n - 1);
    
}

int main() {

    int N;
    printf("Informe o valor de N:  ");
    scanf("%d", &N);

    printf("Numero de 1 ate %d  ", N);
    Decrescente(N);

    return 0;
}
