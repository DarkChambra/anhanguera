#include <stdio.h>

int main() {
    int codigo_produto;
    float preco;
    int quantidade;

    // Cardápio
    printf("==========Cardapio==========\n");
    printf("Especificacao\t\tCodigo\tPreco\n");
    printf("Cachorro Quente\t\t100\t1.20\n");
    printf("Bauru Simples\t\t101\t1.30\n");
    printf("Bauru com Ovo\t\t102\t1.50\n");
    printf("Hamburguer\t\t103\t1.20\n");
    printf("Cheeseburguer\t\t104\t1.70\n");
    printf("Suco\t\t\t105\t2.20\n");
    printf("Refrigerante\t\t106\t1.00\n");

    // Leitura do código do produto e da quantidade
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo_produto);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    // Cálculo do preço do produto
    switch (codigo_produto) {
        case 100:
            preco = 1.20;
            break;
        case 101:
            preco = 1.30;
            break;
        case 102:
            preco = 1.50;
            break;
        case 103:
            preco = 1.20;
            break;
        case 104:
            preco = 1.70;
            break;
        case 105:
            preco = 2.20;
            break;
        case 106:
            preco = 1.00;
            break;
        default:
            printf("Codigo de produto invalido!\n");
            return 1; // Encerra o programa com código de erro
    }

    // Cálculo do valor total
    float total = preco * quantidade;
    printf("Total a pagar: R$%.2f\n", total);

    return 0;
}
