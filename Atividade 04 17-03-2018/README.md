O senhor Bâni adora coelhos e possui uma fazenda com vários desses animais. Porém, devido à idade já meio avançada, não consegue mais contar quantos bichinhos ele possui ao todo. O que ele bolou, então, foi construir várias casinhas enumeradas para que os coelhos possam entrar a noite, facilitando a contagem dos animais. Como os coelhos são temperamentais e organizados, eles formam uma fila para escolher em qual casinha vão dormir.

Sua tarefa é implementar um programa que leia a quantidade de casinhas construídas pelo senhor Bâni e em qual casinha cada coelho escolheu para passar a noite. Como resultado, imprima a quantidade de coelhos em cada casinha e a quantidade total de coelhos.

A primeira linha de entrada do programa contém um inteiro não negativo N, que corresponde à quantidade de casas construídas. Todas as casa estão enumeradas em ordem. Considere o senhor Bâni não construiu mais do que 100 casinhas. A segunda linha do programa contém uma lista de inteiros entre 0 e N-1, que corresponde à casinha escolhida por cada coelho. Como não se sabe previamente a quantidade de animais, o último elemento dessa lista será -1, que não deve ser processado. Para o resultado, imprima os dizeres: "K coelhos catalogados:", em que K corresponde ao número total de coelhos, seguido de uma quebra de linha e uma lista contendo a quantidade de coelhos em cada casinha, da seguinte forma: "Casa X: M", em que X é o número da casinha e M, a quantidade total de coelhos naquela casinha.

Entrada
5
0 4 1 2 1 4 3 1 0 0 0 1 2 4 1 4 1 1 1 2 -1

Saída
20 coelhos catalogados:
Casa 0: 4
Casa 1: 8
Casa 2: 3
Casa 3: 1
Casa 4: 4