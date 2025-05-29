#include <stdio.h>

int main() {

    int numeros[3][3];
    int soma = 0;
    for (int i = 0; i < 3; i++) {
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite um numero  ");
            scanf("%d", &numeros[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma = soma + numeros[i][j];
            
        } 

    }
        printf("A soma de todos os valores da matriz e: %d\n", soma);
    
    return 0;

    return 0;
}