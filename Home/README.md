# Simulador-de-Caixa-Eletronico

**introdução**
Este programa em linguagem C simula um sistema bancário simples, onde é possível criar contas, acessar uma conta com senha, consultar saldo, realizar depósitos, saques e transferências. O sistema é baseado em arrays fixos com um limite máximo de 10 contas, indicado pela constante #define MAX 10. É ideal para fins didáticos e práticas iniciais com programação estruturada.

**Estrutura de Dados**
O sistema utiliza arrays paralelos para armazenar informações de cada conta. Os números das contas são armazenados em um array do tipo long, as senhas em um array int, os saldos em um array float, e os nomes dos titulares em uma matriz de char. Além disso, uma variável inteira total é usada para controlar quantas contas foram cadastradas até o momento.

**Menu Principal**
O programa inicia com a exibição de um menu principal com três opções: criar conta, acessar conta e sair. Essa estrutura é repetida em um laço do-while, permitindo que o usuário continue utilizando o sistema até escolher a opção de sair.

**Criação de Conta**
Ao escolher a opção "Criar conta", o sistema verifica se o número máximo de contas (MAX) já foi atingido. Se ainda houver espaço, solicita ao usuário o número da conta (7 dígitos), a senha (4 dígitos), o nome completo (aceita espaços) e o saldo inicial. Antes de criar, o programa verifica se o número da conta já existe, impedindo duplicidade. Os dados válidos são então armazenados nos arrays correspondentes, e a variável total é incrementada.

**Acesso à Conta**
Para acessar uma conta, o usuário deve digitar o número da conta. O sistema verifica se essa conta existe. Caso exista, ele solicita a senha, permitindo no máximo três tentativas. Se a senha estiver correta, o usuário é redirecionado para o menu de operações da conta. Se errar as três tentativas, o acesso é negado e o controle retorna ao menu principal.

**Menu da Conta**
Uma vez autenticado, o usuário pode realizar cinco ações: ver saldo, depositar, sacar, transferir ou sair da conta. Cada opção é tratada com validações apropriadas.

- Ver saldo: mostra o saldo atual do usuário com duas casas decimais.

- Depositar: solicita um valor positivo e, se válido, o adiciona ao saldo.

- Sacar: permite sacar um valor desde que não ultrapasse o saldo disponível.

- ransferir: solicita o número da conta de destino e o valor da transferência. Se a conta de destino existir e o valor for válido, o saldo é transferido entre as contas.

- Sair da conta: retorna ao menu principal, permitindo acessar outra conta ou encerrar o programa.
Ao selecionar a opção "Sair" no menu principal, o programa finaliza sua execução com uma mensagem apropriada. Todo o sistema é estruturado para garantir uma navegação clara e segura, com mensagens informativas ao usuário e verificação de dados em todas as etapas.

**Saída do Sistema**
Ao selecionar a opção "Sair" no menu principal, o programa finaliza sua execução com uma mensagem apropriada. Todo o sistema é estruturado para garantir uma navegação clara e segura, com mensagens informativas ao usuário e verificação de dados em todas as etapas.


**Validações e Segurança**
O sistema conta com validações para evitar ações inválidas, como valores negativos em operações financeiras, tentativas de criação de contas duplicadas, e acesso não autorizado por senha incorreta. O limite de três tentativas para senha protege contra acessos indevidos. A transferência de valores também só ocorre entre contas existentes e com saldo suficiente.

**Limitações**
- O número de contas é limitado a 10 (MAX).

- Os dados são armazenados em memória, sem persistência em arquivos.

- Não há estrutura de dados dinâmica (como structs), o que limita a escalabilidade.

- As senhas são armazenadas em texto simples (não seguras para uso real).

**Sugestões de Melhorias**
Para aprimorar o sistema, é recomendável utilizar structs para organizar melhor os dados de cada conta, adicionar salvamento em arquivo para persistência de dados, implementar criptografia de senhas e permitir um número maior de contas usando alocação dinâmica de memória.