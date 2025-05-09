#include <stdio.h>

int main() {
    char nome[15];
    float peso, altura, imc;

    printf("Digite seu nome:  ");
    scanf("%s", &nome);

    printf("Digite seu peso:  ");
    scanf("%f", &peso);

    printf("Digite sua altura:  ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("%s Seu IMC e: %.2f\n", nome, imc);


    return 0;
}