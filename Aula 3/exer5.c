#include <stdio.h>

int main() {

    float nota1, nota2, nota3, media;
    int acima_da_media = 0;

    printf("Digite a primeira nota:  ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:  ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota:  ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3 ) /3;

    if (nota1 > media) acima_da_media++;
    if (nota2 > media) acima_da_media++;
    if (nota3 > media) acima_da_media++;
    
    printf("Media das notas: %.2f\n", media);
    printf("Quantidade de notas acima da media: %d\n", acima_da_media);

    return 0;
}