1. Cláudio passou pelo feriado de Páscoa na casa dos parentes e recebeu muitos ovos de chocolate como presente. Porém ele está com receio de comer todos eles e acabar ganhando muito peso. Preocupado com sua saúde, procurou saber sobre o assunto e descobriu que uma forma de estimar o peso ideal para sua altura era através do Índice de Massa Corporal (IMC), dada pela fórmula:

IMC = massa / altura^2

O problema é que ele não quer ficar calculando toda vez esse valor manualmente. Como possui amigos programadores, decidiu pedir ajuda a eles com um código que calcule automaticamente o IMC de cada pessoa. Sua tarefa, como amigo de Cláudio, é implementar um programa que receba dois valores reais (peso e altura) e calcule em que faixa de peso encontra-se o indivíduo:

Classificação		Valor do IMC
Muito abaixo do peso.	IMC < 17
Abaixo do peso.		17 <= IMC < 18.5
Peso normal.		18.5 <= IMC < 25
Acima do peso.		25<= IMC < 30
Obesidade tipo 1.	30 <= IMC < 35
Obesidade tipo 2.	35 <= IMC < 40
Obesidade tipo 3.	IMC >= 40

Para cada resultado, imprima a classificação da tabela. Obs.: para esse problema, utilize a estrutura condicional if-else

Entrada
75.4 1.77

Saída
Peso normal.

2. Mariana está aprendendo, na escola, sobre os números inteiros e suas operações e seu professor apresentou os quatro tipo básicos: adição, subtração, multiplicação e divisão. Além disso, ela também aprendeu sobre as notações pré-fixa, infixa e pós fixa:

Pré-fixa: o operador aparece antes do operandos (+ 4 7)
Infixa: o operador aparece entre os operandos (4 + 7)
Pós-fixa: o operador aparece depois do operandos (4 7 +)
Ajude Mariana a realizar a tarefa de casa que envolve os cálculos das operações com as três notações. Para isso, você deve implementar um programa que leia a expressão aritmética e escreva o resultado final da mesma. Além disso, Mariana precisa saber uma das propriedades do resultado: se é par ou ímpar.

A entrada do seu programa será um caracter representando o tipo de notação utilizada: pré-fixa (E), infixa (I) ou pós-fiva (O), seguida da expressão aritmética entre inteiros: adição (+), subtração (-), multiplicação (x) e divisão (:). Para cada expressão você deve imprimir o resultado e sua propriedade (se é par ou ímpar) com o seguinte padrão: "O resultado N eh par/impar.", em que N é o resultado obtido. Considere o valor 0 como sendo par. Para as expressões de divisão, é assegurado que o resultado obtido é um valor inteiro.

Obs.: para esse exercício serão consideradas apenas as soluções que utilizarem a estrutura condicional switch.

Entrada
E + 4 7

Saída
O resultado 11 eh impar.

Entrada
I 7 - 11

Saída
O resultado -4 eh par.