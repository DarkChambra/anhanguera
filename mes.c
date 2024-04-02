#include <stdio.h>

int main() {
    int numero_mes;

    // Solicita ao usuário que insira um número de mês
    printf("Digite um número de mês (entre 1 e 12): ");
    scanf("%d", &numero_mes);

    // Verifica se o número do mês está dentro do intervalo válido
    if (numero_mes >= 1 && numero_mes <= 12) {
        // Determina o nome do mês com base no número inserido
        switch (numero_mes) {
            case 1:
                printf("Janeiro\n");
                break;
            case 2:
                printf("Fevereiro\n");
                break;
            case 3:
                printf("Março\n");
                break;
            case 4:
                printf("Abril\n");
                break;
            case 5:
                printf("Maio\n");
                break;
            case 6:
                printf("Junho\n");
                break;
            case 7:
                printf("Julho\n");
                break;
            case 8:
                printf("Agosto\n");
                break;
            case 9:
                printf("Setembro\n");
                break;
            case 10:
                printf("Outubro\n");
                break;
            case 11:
                printf("Novembro\n");
                break;
            case 12:
                printf("Dezembro\n");
                break;
        }
    } else {
        // Se o número do mês estiver fora do intervalo, exibe uma mensagem de erro
        printf("Não existe mês correspondente a este número.\n");
    }

    return 0;
}