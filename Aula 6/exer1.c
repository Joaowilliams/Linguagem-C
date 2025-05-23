#include <stdio.h>


void Crescente (int n) {
    if ( n == 0 ) {
        return;
    }

    Crescente(n - 1);
    printf("%d", n);
}

int main() {
    int N;
    printf("Informe o valor de N:  ");
    scanf("%d", &N);

    printf("Numero de 1 ate %d  ", N);
    Crescente(N);
    
    return 0;
}
