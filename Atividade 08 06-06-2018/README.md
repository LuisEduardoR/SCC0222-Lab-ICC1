Em competições é muito comum que a classificação dos competidores seja feito pelo tempo que cada competidor levou para completar a prova. Nesse quesito, é possível medir o tempo de várias formas, sendo uma delas, calcular a diferença do horário em que se iniciou a prova e o horário em que ela foi finalizada.

Um grupo de amigos resolveu fazer uma competição entre eles para ver qual deles conseguiria completar uma lista de exercícios de programação no menor tempo possível. As regras eram bem simples: uma vez iniciada a prova, não é possível realizar pausas no tempo. Ou seja, cada amigo pode iniciar os exercícios quando desejar, registrando o horário de inicio e de fim.

Sua tarefa é calcular o tempo que cada amigo levou para acabar todos os exercícios. A primeira linha de entrada do seu programa é um inteiro N, representando a quantidade de amigos participando da competição. Em seguida, 2N linhas, duas para cada participante (em ordem aleatória), contendo o seguinte formato: Nome hh:mm:ss, em que Nome representa o nome de cada participante e hh:mm:ss representa o horário registrado por esse participante, no formato de 24 horas. Se o participante não estiver registrado no seu programa (primeira entrada), então o horário lido representa o inicio da prova. Caso ele já esteja registrado (segunda entrada), então o horário representa o horário em que o participante finalizou a prova.

Ao final, seu programa deve imprimir o nome de cada participante, na ordem em que foram dados na entrada, seguido do tempo que cada um levou para finalizar os exercícios, no seguinte formato: Nome levou hh:mm:ss..

Observações

Utilize struct para representar um competidor (nome + tempos);
Escreva uma função que calcula a o tempo de prova de um competidor;
Um grupo de amigos é constituído de, no máximo, 100 pessoas;
Nenhum dos amigos possui um nome com mais do que 30 caracteres;
Nenhum dos amigos leva mais do que 24 horas para terminar os exercícios;
Utilize as funções que achar necessário da biblioteca string.h.

Entrada
6
Ana 08:21:10
Bruno 08:14:33
Camila 15:31:05
Denise 12:04:43
Eliseu 16:24:08
Fabio 21:31:41
Fabio 01:19:31
Eliseu 21:54:01
Denise 16:24:09
Camila 18:31:05
Bruno 13:28:44
Ana 12:14:50

Saída
Ana levou 03:53:40.
Bruno levou 05:14:11.
Camila levou 03:00:00.
Denise levou 04:19:26.
Eliseu levou 05:29:53.
Fabio levou 03:47:50.