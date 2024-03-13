#include <stdio.h>

int main() {

    //Declaração de variaveis
    float Preco_limpeza;
    float Preco_alimentos;
    float Preco_padaria;
    float Pag_total;


    int escolha, submenuLimpeza;
    int escolha, submenuAlimentos;
    int escolha, submenuPadaria;
    int escolha, submenuPagamentos;
    
    do {
        printf("=== MENU PRINCIPAL ===\n");
        printf("1. Venda de Material de Limpeza\n");
        printf("2. Venda de Alimentos\n");
        printf("3. Padaria\n");
        printf("4. Pagamento\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Opcao 1 selecionada: Venda de Material de Limpeza\n");

                do {
                    printf("======== SUBMENU LIMPEZA ========\n");
                    printf(" 1.      Detergente       R$1,99\n");
                    printf(" 2.   Sabao em po - 1kg   R$8,99\n");
                    printf(" 3.       Esponja         R$1,50\n");
                    printf(" 4.    Amaciante - 1Lt   R$15,00\n");
                    printf(" 5. Voltar ao menu principal\n");
                    printf("Escolha uma opcao: ");
                    scanf("%d", &submenuLimpeza);

                    switch (submenuLimpeza) {
                        case 1:
                            printf("Opcao 1.1 selecionada: Detergente\n");

                            break;
                        case 2:
                            printf("Opcao 1.2 selecionada: Sabao em po\n");
                            break;
                        case 3:
                            printf("Opcao 1.3 selecionada: Esponja\n");
                            break;
                        case 4:
                            printf("Opcao 1.4 selecionada: Amaciante\n");
                            break;
                        case 5:
                            printf("Voltando ao menu principal...\n");
                            break;
                        default:
                            printf("Opcao invalida! Tente novamente.\n");
                    }


                    while (getchar() != '\n');

                } while (submenuLimpeza != 5);

                break;

            case 2:
                printf("Opcao 2 selecionada: Venda de Alimentos\n");
                do {
                    printf("======== SUBMENU VENDA DE ALIMENTOS ========\n");
                    printf(" 1.         Café          R$19,99\n");
                    printf(" 2.         Leite         R$5,90\n");
                    printf(" 3.       Arroz - 1kg     R$4,50\n");
                    printf(" 4.    Feijao Preto - 1kg   R$8,00\n");
                    printf(" 5.       Acucar - 1kg    R$5,00\n");
                    printf(" 5. Voltar ao menu principal\n");
                    printf("Escolha uma opcao: ");
                    scanf("%d", &submenuAlimentos);

                    switch (submenuAlimentos) {
                        case 1:
                            printf("Opcao 1.1 selecionada: Café\n");

                            break;
                        case 2:
                            printf("Opcao 1.2 selecionada: Leite\n");
                            break;
                        case 3:
                            printf("Opcao 1.3 selecionada: Arroz\n");
                            break;
                        case 4:
                            printf("Opcao 1.4 selecionada: Feijao Preto\n");
                            break;
                        case 5:
                            printf("Opcao 1.5 selecionada: Acucar\n");
                            break;
                        case 6:
                            printf("Voltando ao menu principal...\n");
                            break;
                        default:
                            printf("Opcao invalida! Tente novamente.\n");
                    }
                    
                    while (getchar() != '\n');
                    
                } while (submenuAlimentos != 5);
                break;

            case 3:
                printf("Opcao 3 selecionada: Padaria\n");
                 do {
                    printf("======== SUBMENU PADARIA ========\n");
                    printf(" 1.       Pao de Forma    R$9,50\n");
                    printf(" 2.       Pao Integral    R$12,50\n");
                    printf(" 3.     Pao Frances - Unid   R$1,90\n");
                    printf(" 4.          Sonho        R$8,50\n");
                    printf(" 5. Voltar ao menu principal\n");
                    printf("Escolha uma opcao: ");
                    scanf("%d", &submenuPadaria);

                    switch (submenuPadaria) {
                        case 1:
                            printf("Opcao 1.1 selecionada: Pao de forma\n");

                            break;
                        case 2:
                            printf("Opcao 1.2 selecionada: Pao Integral\n");
                            break;
                        case 3:
                            printf("Opcao 1.3 selecionada: Pao Frances\n");
                            break;
                        case 4:
                            printf("Opcao 1.4 selecionada: Sonho\n");
                            break;
                        case 5:
                            printf("Voltando ao menu principal...\n");
                            break;
                        default:
                            printf("Opcao invalida! Tente novamente.\n");
                    }
                    
                    while (getchar() != '\n');
                    
                } while (submenuPadaria != 5);
                break;

            case 4:
                printf("Opcao 4 selecionada: Pagamento\n");
                // Implemente o submenu de pagamento aqui
                break;

            case 5:
                printf("Saindo do programa. Ate logo!\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

        
        while (getchar() != '\n');

    } while (escolha != 5);

    return 0;
}
