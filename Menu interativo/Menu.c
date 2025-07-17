#include <stdio.h> // Para funções de entrada e saída (printf, scanf)
#include <stdlib.h> // Para funções gerais (system, exit)

// Função principal do programa
int main() {
    int opcao; // Variável para armazenar a opção escolhida pelo usuário
    char nome[50]; // Variável para armazenar o nome do usuário (para reserva de mesa)
    int pessoas; // Variável para armazenar o número de pessoas (para reserva de mesa)
    char horario[20]; // Variável para armazenar o horário (para reserva de mesa)

    // Loop do...while para garantir que o menu seja exibido pelo menos uma vez
    // e continue até que o usuário escolha sair (opção 0)
    do {
        // Limpa a tela do console para uma melhor visualização (funciona em sistemas Unix/Linux/macOS)
        // Para Windows, você pode usar system("cls"); ou remover esta linha se não for necessário.
        // system("clear"); 

        printf("\n--- Bem-vindo ao Assistente Virtual MAX ---\n");
        printf("1. Falar com o MAX\n");
        printf("2. Obter endereco\n");
        printf("3. Reservar mesa\n");
        printf("0. Sair\n");
        printf("------------------------------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao); // Lê a opção escolhida pelo usuário

        // Limpa o buffer do teclado após ler um inteiro.
        // Isso é importante para evitar problemas com leituras de string posteriores (fgets).
        while (getchar() != '\n'); 

        // Estrutura de decisão para processar a opção escolhida
        switch (opcao) {
            case 1:
                printf("\nMAX: Ola! Em que posso ajudar hoje?\n");
                printf("MAX: Eu sou um assistente virtual programado para te auxiliar.\n");
                printf("Pressione ENTER para continuar...");
                getchar(); // Espera o usuário pressionar ENTER
                break;
            case 2:
                printf("\nMAX: Para qual endereco voce gostaria de informacoes?\n");
                printf("MAX: (Ex: 'nossa sede', 'loja mais proxima')\n");
                printf("Sua pergunta: ");
                // Usa fgets para ler a linha inteira, incluindo espaços
                fgets(nome, sizeof(nome), stdin); 
                printf("MAX: O endereco da nossa sede e Rua da Programacao, 123, Centro, Cidade Digital.\n");
                printf("MAX: Para a loja mais proxima, por favor, informe sua localizacao atual.\n");
                printf("Pressione ENTER para continuar...");
                getchar();
                break;
            case 3:
                printf("\nMAX: Otimo! Para reservar uma mesa, preciso de algumas informacoes.\n");
                printf("MAX: Qual o nome para a reserva? ");
                fgets(nome, sizeof(nome), stdin); // Lê o nome
                // Remove o caractere de nova linha '\n' que fgets pode incluir
                nome[strcspn(nome, "\n")] = 0; 

                printf("MAX: Para quantas pessoas? ");
                scanf("%d", &pessoas); // Lê o número de pessoas
                while (getchar() != '\n'); // Limpa o buffer

                printf("MAX: Qual horario voce gostaria? (Ex: 19:00) ");
                fgets(horario, sizeof(horario), stdin); // Lê o horário
                horario[strcspn(horario, "\n")] = 0; // Remove o '\n'

                printf("\nMAX: Certo, %s! Sua reserva para %d pessoas as %s foi solicitada.\n", nome, pessoas, horario);
                printf("MAX: Aguarde a confirmacao em breve.\n");
                printf("Pressione ENTER para continuar...");
                getchar();
                break;
            case 0:
                printf("\nMAX: Obrigado por usar o Assistente Virtual MAX. Ate mais!\n");
                break;
            default:
                printf("\nMAX: Opcao invalida. Por favor, escolha uma opcao do menu.\n");
                printf("Pressione ENTER para continuar...");
                getchar();
                break;
        }
    } while (opcao != 0); // O loop continua enquanto a opção não for 0 (Sair)

    return 0; // Indica que o programa terminou com sucesso
}
