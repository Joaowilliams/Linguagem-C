#include <stdio.h>

int main() {

    float valorProduto;
    float valorAvista, valorParcelado3x;
    float comissaoAvista, comissaoParcelada;

    printf("Digite o valor do produto:  ");
    scanf("%f", &valorProduto); 

    valorAvista = valorProduto * 0.90; 
    valorParcelado3x = valorProduto / 3;
    comissaoAvista = valorAvista * 0.05;
    comissaoParcelada = valorProduto * 0.05;

    printf(" Venda:  ");
    printf(" Valor avista com 10%% de desconto: R$ %.2f  ", valorAvista);
    printf(" Valor parcelado (3x sem juros):  R$ %.2f cada  ", valorParcelado3x);
    printf("Comissao do vendedor (a vista):  R$ %.2f  ", comissaoAvista);
    printf("Comissao do vendedor (parcelado):  R$ %.2f", comissaoParcelada);

    return 0;

}