1. O ângulo entre dois vetores, em qualquer dimensão, pode ser calculado utilizando-se o produto escalar entre eles, ou seja, u . v = |u||v|cos(θ) em que:

u e v representam os vetores;
u . v é o produto escalar, dado pelo produto entre cada coordenada do vetor;
|u| é a norma do vetor, dada pela raiz quadrada da soma dos quadrados das coordenadas do vetor;
θ é o do ângulo formado entre os vetores, que queremos calcular


Para esse exercício, você deve criar uma função que receba como parâmetro os vetores a serem processados e retorne o ângulo formado entre eles, em graus.

A entrada do seu programa será um inteiro d, representando a dimensão em que se está calculando o ângulo, seguido de uma linha com d valores de ponto flutuante, representando as coordenadas do primeiro vetor e outra linha com as d coordenadas do segundo vetor. A saída do seu programa deve imprimir o ângulo entre os dois vetores (em graus), utilizando duas casas decimais.

Entrada
3
1 0 3
5 5 0

Saída
77.08 graus.

2. O jogo de campo minado é jogado em uma campo n x m, n sendo o número de linhas, e m o número de colunas. Nesse campo são escondidas k minas em posições distintas. A função do jogador é selecionar posições do campo em que não hajam minas escondidas, caso contrário, ele perde o jogo. Caso uma posição sem mina seja escolhida, um inteiro entre 0 e 8 aparece, revelando quantas bombas estão presentes na região adjacente ou diagonalmente adjacente à posição escolhida. Veja um exemplo de um campo completo, com as minas e os descritos:

Mines.jpg

Sua tarefa aqui é escrever a configuração final de um campo minado, aplicando as regras descritas acima. A entrada do seu programa serão dois inteiros n e m correspondendo ao tamanho do campo a ser lido. Em seguida, uma matriz contendo os elementos do campo, sendo que . representa os espaços sem bomba e * representa as minas escondidas. Como saída do programa, você deve imprimir a matriz que representa a configuração final do campo, substituindo os caracteres de espaço sem bomba . pelo número correto.

Obs.: Crie uma função que faça a tarefa para cada célula da matriz (campo).

Entrada
6 5
. * . . .
. . . . .
. . * * .
. . . * .
. . . . . 
. . . * . 

Saída
1 * 1 0 0
1 2 3 2 1
0 1 * * 2 
0 1 3 * 2
0 0 2 2 2
0 0 1 * 1 