#include <stdio.h>

int main() {
    int idade;
    int idoso, adulto, adolescente, crianca;

    printf("Qual a sua idade  ");
    scanf("%d", &idade);

    if (idade >= 65) {
        printf("Voce e um idoso  ");
    }

    else if (idade >= 18) {
        printf("Voce e um adulto  ");
    }
        
    else if (idade >= 13) {
        printf("Voce e um adolescente  ");
    }

    else {
       printf ("Voce e uma crianca");
    }

    return 0;
}