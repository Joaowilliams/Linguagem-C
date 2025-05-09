#include <stdio.h>

int main() {
    char nome[15];
    float nota1, nota2, media;
    
    printf("Qual o seu nome?  ");
    scanf("%s", &nome);

    printf("Qual a primeira nota?  ");
    scanf("%f", &nota1);

    printf("Qual a segunda nota?  ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) /2;

    printf("\n O aluno: %s obteve media final: %.2f\n", nome, media);

    return 0;
}