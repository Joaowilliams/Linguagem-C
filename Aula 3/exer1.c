#include <stdio.h>

int main() {

    int ano_nascimento;
    int ano_atual;
    int idade; 

    printf("Digite o ano de nascimento  ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual  ");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nascimento;

    if (idade >= 18) {
        printf("Voce podera tirar a habilitacao.\n  ");
    } else {
        printf("Voce nao poderar tirar a habilitacao\n  ");
     }
    
    return 0;
}
