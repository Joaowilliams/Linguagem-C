#include <stdio.h>

int main() {
    int numeros[3][3];
    int soma;
    
    for (int i = 0; i <3; i++) {
        for (int j = 0; i <3; i++) {
            soma += numeros[i][j];
            printf("Digite um valor:  ");
            scanf("%d", &numeros[i][j]);
        }
    }

        for (int i= 0; i < 3; i++) {
            int soma = 0;
            for (int j = 0; j < 3; j++) {
                soma += numeros[i][j];
            }
            printf("Soma da linha %d, %d\n", i, soma);
        }



    return 0;
} 
