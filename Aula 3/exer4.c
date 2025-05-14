#include <stdio.h>

int main() {
    int numero1, numero2, operacao;
    float resultado;

    printf("Digite o primeiro numero  ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero  ");
    scanf("%d", &numero2);

    printf("\n 1 para soma\n  ");
    printf("\n 2 para subtracao\n  ");
    printf("\n 3 para multiplicacao\n ");
    printf("\n 4 para divisao\n  ");

    printf("\n Escolha uma operacao:  ");
    scanf("%d", &operacao);

    switch (operacao) {
        case 1:
            resultado = numero1 + numero2;
            printf("\n Resultado da soma: %2.f\n", resultado);
            break;
        case 2:
            resultado = numero1 - numero2;
            printf("\n Resultado da subtracao: %2.f\n", resultado);
            break;
        case 3:
            resultado = numero1 * numero2;
            printf("\n Resultado da multiplicacao: %2.f\n", resultado);
            break;
        case 4:
            resultado = numero1 / numero2;
            printf("\n Resultado da divisao: %2.f\n", resultado);
            break;
        default:
            printf("\n Opcao invalida!\n");
    }

    return 0;
}