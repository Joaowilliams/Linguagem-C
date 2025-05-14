#include <stdio.h>

int main() {

    float peso, altura, imc;
    
    printf("Qual o seu peso?  ");
    scanf("%f", &peso);

    printf("Qual a sua altura?  ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %2.f  ", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Peso normal\n");
    } else if (imc < 30.0) {
        printf("Sobrepeso");
    } else if (imc < 35.0) {
        printf("Obesidade grau 1\n");
    } else if (imc < 40.0) {
        printf("Obesidade grau 2\n");
    } else {
        printf("Obesidade grau 3\n");
    }

    return 0;
}
