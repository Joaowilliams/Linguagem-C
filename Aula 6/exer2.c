#include <stdio.h>

void decrescente(int contador, int n) {
        if(contador >= n) {
            printf("%d", contador);
            decrescente(contador -1, n);
            return 0;
            
        }
    }


int main() {

    int n;
   
    printf("informe o valor de N: ");
    scanf("%d", &n);

    decrescente(1,n);


    return 0;
}