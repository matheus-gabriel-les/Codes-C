#include <stdio.h>

int main() {
    float saldo_atual = 1000;
    float deposito, saque, transferencia;
    int operacao;

    printf("\nEscolha uma operacao:");
    printf("\n1 - Consultar saldo");
    printf("\n2 - Depositar");
    printf("\n3 - Sacar");
    printf("\n4 - Transferir");
    printf("\n5 - Sair do programa\n");
    scanf("%d", &operacao);

    while (operacao != 5) {
        if (operacao < 1 || operacao > 5) {
            printf("\nValor invalido. Digite novamente: ");
            scanf("%d", &operacao);
            
        }

        switch (operacao) {
            case 1:
                printf("\nSaldo atual: R$ %.2f\n", saldo_atual);
                break;

            case 2:
                printf("\nDigite um valor para depositar: ");
                scanf("%f", &deposito);

                while (deposito < 0.01) {
                    printf("\nValor invalido. Digite novamente: ");
                    scanf("%f", &deposito);
                }

                saldo_atual += deposito;
                printf("\nDeposito realizado! Novo saldo: R$ %.2f\n", saldo_atual);
                break;

            case 3:
                printf("\nDigite um valor para sacar: ");
                scanf("%f", &saque);

                while (saque < 0.01 || saque > saldo_atual) {
                    printf("\nValor invalido. Digite novamente: ");
                    scanf("%f", &saque);
                }

                saldo_atual -= saque;
                printf("\nSaque realizado! Novo saldo: R$ %.2f\n", saldo_atual);
                break;

            case 4:
                printf("\nDigite um valor para transferir: ");
                scanf("%f", &transferencia);

                while (transferencia < 2.00 || transferencia > saldo_atual) {
                    printf("\nValor invalido. Digite novamente: ");
                    scanf("%f", &transferencia);
                }

                saldo_atual -= transferencia;
                printf("\nTransferencia realizada! Novo saldo: R$ %.2f\n", saldo_atual);
                break;
        }

        printf("\nEscolha outra operacao (1-Consultar, 2-Depositar, 3-Saque, 4-Transferir, 5-Sair): ");
        scanf("%d", &operacao);
    }

    printf("\nPrograma encerrado. Saldo final: R$ %.2f\n", saldo_atual);
    return 0;
}
