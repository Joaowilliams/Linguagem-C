#include <stdio.h>

int main() {
    int numeros[3][3];
    int menor, maior;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &numeros[i][j]);
            
        }
    }

    maior = numeros[0][0];
    menor = numeros[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (numeros[i][j] > maior) {
                maior = numeros[i][j];
            }
            if (numeros[i][j] < menor) {
                menor = numeros[i][j];
            }
        }
    }


    printf("O menor valor da matriz e: %d\n ", menor);
    printf("O maior valor da matriz e: %d\n ", maior);


    return 0;
}
