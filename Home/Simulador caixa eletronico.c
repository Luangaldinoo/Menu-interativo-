#include <stdio.h>
#include <string.h>

#define MAX 10

int main() {
    long contas[MAX], conta, contaDestino;
    int senhas[MAX], total = 0, opcao, senha, i, j;
    float saldos[MAX], valor;
    char nomes[MAX][50], nome[50];

    do {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1. Criar conta\n");
        printf("2. Acessar conta\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1 && total < MAX) {
            printf("Número da conta (7 dígitos): ");
            scanf("%ld", &conta);

            for (i = 0; i < total && contas[i] != conta; i++);
            if (i < total) {
                printf("Conta já existe.\n");
                continue;
            }

            printf("Senha (4 dígitos): ");
            scanf("%d", &senha);
            printf("Nome completo: ");
            scanf(" %[^\n]", nome); // permite espaços
            printf("Saldo inicial: ");
            scanf("%f", &valor);

            contas[total] = conta;
            senhas[total] = senha;
            strcpy(nomes[total], nome);
            saldos[total++] = valor;

            printf("Conta criada com sucesso!\n");
        }

        else if (opcao == 2) {
            printf("Número da conta: ");
            scanf("%ld", &conta);

            for (i = 0; i < total && contas[i] != conta; i++);
            if (i == total) {
                printf("Conta não encontrada.\n");
                continue;
            }

            for (j = 0; j < 3; j++) {
                printf("Digite a senha: ");
                scanf("%d", &senha);
                if (senha == senhas[i]) break;
                printf("Senha incorreta.\n");
            }

            if (j == 3) {
                printf("Tentativas de senha excedidas.\n");
                continue;
            }

            printf("\nBem-vindo, %s!\n", nomes[i]);

            do {
                printf("\n=== MENU DA CONTA ===\n");
                printf("1. Ver saldo\n");
                printf("2. Depositar\n");
                printf("3. Sacar\n");
                printf("4. Transferir\n");
                printf("5. Sair da conta\n");
                printf("Escolha uma opção: ");
                scanf("%d", &opcao);

                switch (opcao) {
                    case 1:
                        printf("Seu saldo atual é: R$ %.2f\n", saldos[i]);
                        break;
                    case 2:
                        printf("Digite o valor a depositar: ");
                        scanf("%f", &valor);
                        if (valor > 0) {
                            saldos[i] += valor;
                            printf("Depósito realizado com sucesso!\n");
                        } else {
                            printf("Valor inválido.\n");
                        }
                        break;
                    case 3:
                        printf("Digite o valor a sacar: ");
                        scanf("%f", &valor);
                        if (valor > 0 && valor <= saldos[i]) {
                            saldos[i] -= valor;
                            printf("Saque realizado com sucesso!\n");
                        } else {
                            printf("Saldo insuficiente ou valor inválido.\n");
                        }
                        break;
                    case 4:
                        printf("Digite a conta de destino: ");
                        scanf("%ld", &contaDestino);
                        for (j = 0; j < total && contas[j] != contaDestino; j++);
                        if (j == total) {
                            printf("Conta de destino não encontrada.\n");
                            continue;
                        }

                        printf("Digite o valor a transferir: ");
                        scanf("%f", &valor);
                        if (valor > 0 && valor <= saldos[i]) {
                            saldos[i] -= valor;
                            saldos[j] += valor;
                            printf("Transferência realizada com sucesso!\n");
                        } else {
                            printf("Saldo insuficiente ou valor inválido.\n");
                        }
                        break;
                    case 5:
                        printf("Saindo da conta...\n");
                        break;
                    default:
                        printf("Opção inválida.\n");
                }

            } while (opcao != 5);
        }

        else if (opcao == 3) {
            printf("Saindo do sistema...\n");
        }

        else {
            printf("Opção inválida ou limite de contas atingido.\n");
        }

    } while (opcao != 3);

    return 0;
}
