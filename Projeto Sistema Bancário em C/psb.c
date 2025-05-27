#include <stdio.h>
#include <windows.h> 
#include <stdlib.h> 


int mostrarMenu() {
    int opcao;

    printf("===== SISTEMA BANCARIO =====\n  ");
    printf("0 - Sair\n  ");
    printf("1 - Criar Conta\n  ");
    printf("2 - Exibir Contas\n  ");
    printf("3 - Depositar\n  ");
    printf("4 - Sacar\n  ");
    printf("5 - Buscar Conta\n  ");
    printf("===========================\n  ");
    scanf("%d", &opcao);
    
    return opcao;
}

void criarConta() {
    printf("Criar Conta Selecionada.\n"  );
}

void exibirContas() {
    printf("Exibir Conta Selecionada.\n"  );
}

void depositar() {
    printf("Depositar Conta Selecionada.\n"  );
}

void sacar() {
    printf("Sacar Conta Selecionada.\n"  );
}

void buscarConta() {
    printf("Buscar Conta Selecionada;\n"  );
}


int main() {
    
    int opcao; 

    do {
           
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

        Sleep(3000);
        system("cls");

    } while (opcao != 0);

    return 0;

}
  
