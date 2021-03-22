Um método muito comum utilizado em restaurantes de lanchonetes para controle dos pedidos é a distribuição de senhas aleatórias para seus clientes. Desse modo, os clientes não ficam ansiosos esperando seu número ser chamado. Entretanto, o controle desses pedidos é importante para que nenhum cliente seja esquecido e fique aborrecido com o atendimento.

Seu trabalho é implementar uma função que seja capaz de manter a ordem os pedidos, conforme pedidos vão saindo e entrando no restaurante. Além disso, como funcionalidade extra, o chefe do sistema resolveu que seria interessantes saber qual a menor e a maior senha da fila de pedidos, apenas para controle interno.

A entrada do seu programa será dada em comandos:

1: entrada de um pedido, seguido de um inteiro não negativo n;
2: saída de um pedido, o mais antigo da fila;
3: menor senha na que ainda está na fila;
4: maior senha que ainda está na fila;
5: tamanho da fila.
Seu programa deve imprimir os devidos valores para os comandos 3, 4 e 5 da seguinte maneira: Menor senha: valor., Maior senha: valor., Tamanho da fila: valor., em que os valor deve ser calculado pelo seu programa. Caso não haja nenhuma senha na fila, seu programa deve responder 0. Para o comando 2, imprima: Pedido n entregue., em que n é o número do pedido.

OBS: utilize um vetor dinâmico (heap) para controlar a fila e altere seu tamanho utilizando realloc.

Dica: para ler até o final do arquivo, utilize while( scanf( ... ) != EOF ). EOF é uma macro de C pra End Of File. Para os testes no terminal, digite ctrl+D.

Entrada
1 5
1 8 
1 26
1 7
1 38
2
1 9
1 78
2
2
3
2
3
4
5

Saída
Pedido 5 entregue.
Pedido 8 entregue.
Pedido 26 entregue.
Menor senha: 7.
Pedido 7 entregue.
Menor senha: 9.
Maior senha: 78.
Tamanho da fila: 3.