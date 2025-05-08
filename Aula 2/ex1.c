#include <stdio.h>

int main() {
    
    char nome[15];
    int idade;
    float altura;
    char genero;
    

    printf("Qual é o seu nome ");
    scanf("%s", &nome);
    
    printf("Qual sua idade  ");
    scanf("%d", &idade);

    printf("Qual a sua altura  ");
    scanf("%f", &altura);

    printf("Qual o seu gênero  ");
    scanf(" %c", &genero);

    
    printf("Bem-vindo(a), %s!\n", nome);
    printf("Seu Perfil\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n" , idade);
    printf("Altura: %.2f\n", altura);
    printf("Genero: %c\n", genero);
        

        return 0;




}