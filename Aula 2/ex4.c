#include <stdio.h>

int main() {
    
    float angulo1;
    float angulo2;
    float angulo3;

    printf("Digite o primeiro angulo:  ");
    scanf("%f", &angulo1);

    printf("Digite o segundo angulo:  ");
    scanf("%f", &angulo2);

    angulo3 = 180 - (angulo1 + angulo2);

    printf("O terceiro angulo do triangulo e: %.2f graus\n", angulo3);


    return 0;

}