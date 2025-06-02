#include <stdio.h>

int main() {
    int matriz[3][3];
    int N;
    int encontrado = 0;

    printf("Digite um numero:  ");
    scanf("%d", &N);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <3; j++) {
            printf("numero [%d][%d]:  ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == N) {
                if (!encontrado) {
                    printf("\nO numero %d foi encontrado nas posicoes:\n", N);
                }
                printf("linha %d, coluna %d\n", i, j);
                encontrado = 1;
            }
        }
    }

    if (!encontrado) {
        printf("O numero %d nao foi encontrado.\n", N);
    }
    
    return 0;
}
