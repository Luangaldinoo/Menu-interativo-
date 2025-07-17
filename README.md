
🚀 Descrição do Projeto
Este projeto é um simulador de um assistente virtual interativo, desenvolvido em linguagem C. O objetivo principal é proporcionar uma experiência prática na aplicação de conceitos fundamentais da programação, como variáveis, estruturas de decisão (if, switch) e laços de repetição (do...while). O assistente, carinhosamente chamado de MAX, oferece um menu de opções para o usuário interagir, simulando funcionalidades básicas de um sistema de atendimento.

✨ Funcionalidades
O Assistente Virtual MAX oferece as seguintes opções no menu interativo:

Falar com o MAX: Uma breve interação com o assistente, mostrando uma mensagem de boas-vindas e propósito.

Obter Endereço: Simula a funcionalidade de fornecer informações de endereço, pedindo uma "pergunta" ao usuário e retornando um endereço fictício.

Reservar Mesa: Permite ao usuário simular uma reserva de mesa, coletando o nome para a reserva, o número de pessoas e o horário desejado.

Sair: Encerra a sessão com o assistente.

🛠️ Tecnologias Utilizadas
Linguagem de Programação: C

Compilador: GCC (GNU Compiler Collection) ou similar (MinGW, Clang)

📦 Como Compilar e Executar
Siga os passos abaixo para compilar e executar o projeto em seu ambiente:

Clone o Repositório (se aplicável):

git clone https://github.com/seu-usuario/assistente-virtual-max.git
cd assistente-virtual-max

(Se você ainda não tem um repositório, pode ignorar esta etapa e apenas salvar o código em um arquivo .c)

Salve o Código:
Certifique-se de que o código-fonte (assistente_max.c) esteja salvo em seu diretório de trabalho.

Compile o Código:
Abra um terminal ou prompt de comando e navegue até o diretório onde o arquivo assistente_max.c está salvo. Utilize o GCC para compilar:

gcc assistente_max.c -o assistente_max

No Windows, o executável será assistente_max.exe.

No Linux/macOS, o executável será assistente_max.

Execute o Programa:
Após a compilação, execute o programa a partir do terminal:

./assistente_max

No Windows: assistente_max.exe

📂 Estrutura do Código
O código-fonte (assistente_max.c) está estruturado da seguinte forma:

Inclusão de Bibliotecas: stdio.h para entrada/saída e stdlib.h para funções gerais (como system).

Função main(): A função principal onde a lógica do programa é executada.

Variáveis: Declaração de variáveis para armazenar a opção do menu, nome, número de pessoas e horário.

Loop do...while: Garante que o menu seja exibido pelo menos uma vez e continue a ser exibido até que o usuário escolha sair.

switch Statement: Utilizado para controlar o fluxo do programa com base na opção escolhida pelo usuário. Cada case corresponde a uma funcionalidade do menu.

printf() e scanf() / fgets(): Funções para exibir mensagens ao usuário e ler suas entradas. fgets é usado para ler strings com espaços.

Limpeza de Buffer: while (getchar() != '\n'); é utilizado para limpar o buffer do teclado, evitando problemas com leituras subsequentes.

🚀 Melhorias Futuras
Algumas ideias para expandir e aprimorar este projeto incluem:

Persistência de Dados: Armazenar informações (ex: reservas) em um arquivo (texto ou binário) para que não sejam perdidas ao encerrar o programa.

Validação de Entrada: Implementar validações mais robustas para as entradas do usuário (ex: verificar se o número de pessoas é positivo, formato do horário).

Mais Opções de Menu: Adicionar novas funcionalidades ao assistente (ex: previsão do tempo, calculadora, jogos simples).

Funções Separadas: Organizar o código em funções separadas para cada funcionalidade (ex: falarComMax(), obterEndereco(), reservarMesa()).

Interface Gráfica: Para um desafio maior, explorar bibliotecas C para criar uma interface gráfica simples (ex: GTK+, SDL).

🤝 Contribuição
Sinta-se à vontade para contribuir com este projeto! Se você tiver sugestões de melhorias, encontrar bugs ou quiser adicionar novas funcionalidades, por favor:

Faça um fork do repositório.

Crie uma nova branch (git checkout -b feature/sua-feature).

Faça suas alterações e commit (git commit -m 'Adiciona nova feature').

Envie para a branch original (git push origin feature/sua-feature).

Abra um Pull Request.

📄 Licença
Este projeto está sob a licença MIT. 


