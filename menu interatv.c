#include <stdio.h>

int main(void) {
    int opcao;
    char repetir;

    do {
        printf("\n ---- Bem Vindos ao menu interativo da empresa!!!! ---- \n");
        printf("\n                      - - OPCOES - -               \n");
        printf(" 1 - Falar com atendente virtual. \n");
        printf(" 2 - Mais Informacoes. \n");
        printf(" 3 - Reservar uma mesa. \n");
        printf("                  DIGITE O NUMERO EM QUE DESEJA: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\n Ola, sou MAX, seu atendente virtual!! Em que posso ajudar?\n\n");
        } else if (opcao == 2) {
            printf("\n Endereco: R. Estr. 22 - Jardim Limoeiro, Camacari - BA, 42800-737\n\n");
        } else if (opcao == 3) {
            printf("\n Reserve Sua Mesa! Faca a reserva de sua mesa para a festa de aniversario!\n\n");
        } else {
            printf("\n ERRO4040, Numero Invalido.\n\n");
        }

        printf("Deseja voltar ao menu? (S/N): ");
        scanf(" %c", &repetir);  // espaço antes do %c é importante para ignorar o Enter anterior

    } while (repetir == 'S' || repetir == 's');

    printf("\nOBRIGADO\n");

    return 0;
}
