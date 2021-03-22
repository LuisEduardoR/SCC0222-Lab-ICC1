Marcelo adora geometria e aprendeu que é possível calcular os valores trigonométricos sem auxílio da calculardora ou das bibliotecas matemáticas da sua linguagem de programação favorita. Através da série de potências, é possível obter os valores do seno e do coseno apenas realizando a soma:

sin(x) = x - (x^3 / 3!) + (x^5 / 5!) - ... = sum_{k=0}^{n}((-1)^k*x^{2k+1} / (2k + 1)!)
cos(x) = x - (x^4 / 4!) + (x^6 / 6!) - ... = sum_{k=0}^{n}((-1)^k*x^{2k} / (2k)!)

Para ter certeza que os valores obtidos estão de acordo com os valores reais, Marcelo resolveu comparar a sua implementação de uma das séries e verificar seu valor com o obtido por uma função de uma biblioteca matemática. Como amigo de Marcelo, você resolveu ajudá-lo com essa tarefa.

Como entrada, o seu programa deve receber um valor em ponto flutuante x, seguido de um número natural n e calcular o valor de sin(x) através da série de potência com n termos. O resultado final deve ser o valor absoluto do erro obtido através da série de potência e a função sin() da biblioteca math.h. Para isso, imprima "O erro obtido eh erro", em que erro está em notação científica com 6 casas depois da vírgula.

Obs.: para esse exercício, não será permitida a utilização de vetores.

Entrada
0.57 2

Saída
O erro obtido eh 4.975487e-04.