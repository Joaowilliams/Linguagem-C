#include <stdio.h>

int main() {
    
    int opcao; 

    do {
        printf("===== SISTEMA BANCARIO =====\n  ");
        printf("0 - Sair\n  ");
        printf("1 - Criar Conta\n  ");
        printf("2 - Exibir Contas\n  ");
        printf("3 - Depositar\n  ");
        printf("4 - Sacar\n  ");
        printf("5 - Buscar Conta\n  ");
        printf("===========================\n  ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("Saindo do sistema...\n  ");
                break;
            case 1:
                printf("Opcao Criar Conta selecionada.\n  ");
                break;
            case 2:
                printf("Opcao Exibir Contas selecionada.\n  ");
                break;
            case 3:
                printf("Opcao Depositar selecionada.\n  ");
                break;
            case 4:
                printf("Opcao Sacar selecionada.\n  ");
                break;
            case 5:
                printf("Opcao Buscar Conta selecionada.\n  ");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n  ");
                break;
        }

    } while (opcao != 0);

    
        
    return 0;

}
  
        

   


    
