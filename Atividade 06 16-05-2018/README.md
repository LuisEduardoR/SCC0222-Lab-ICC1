WARNING: This assignment is incomplete and only solved 2/6 of the original test cases due to problems with me not knowing about realloc at the time

Description:

Alberto trabalha em um centro de processamento de dados e todos os dias recebe novos arquivos para serem processados. Entretanto, devido a problemas financeiros, a empresa possui uma quantidade finita de recursos diários que podem ser utilizados. Se algum processo (arquivo) consumir mais do que a quantidade disponível naquele dia, ele deve ser executado no dia seguinte.

Para que os arquivos sejam processados, Alberto pega o último arquivo recebido e inicia sua execução, eliminando-o assim que é finalizado e reiniciando o processo. Os últimos arquivos recebidos são processados primeiro, depois o penúltimo e assim por diante. Caso algum arquivo seja repassado para o dia seguinte, ele deve ser colocado no início da sequência, o que significa que eles serão processados por último, após os arquivos do dia. Para que ele possa ter um controle sobre a fila de arquivos, ele pediu sua ajuda para criar um sistema em que, ao final de cada dia, um pequeno relatório seja emitido com a quantidade de documentos restantes.

A entrada do seu programa receberá uma linha contendo um inteiro representando a quantidade de dias D que Alberto tem para processar todos os arquivos, seguido de um valor inteiroR que representa a quantidade de recursos que podem ser utilizadas durante o dia. Em seguida, uma sequência para cada dia de trabalho contendo: um inteiro T com a quantidade de arquivos que deram entrada no dia, seguido de uma linha com T valores inteiros representando os recursos necessários para processamento individual. A saída deve conter um pequeno relatório para cada dia contendo Todos os arquivos foram processados., caso não haja mais arquivos na fila, ou a quantidade de arquivos t restante no formato Restam t arquivos..

OBS: Como não se sabe a priori o número de trabalhos que deverão ser processados a cada dia, utilize alocação dinâmica de vetores para cada novo dia.

Entrada
3 8
4 
1 2 1 3
3
6 2 1
4
2 1 3 4

Saída
Todos os arquivos foram processados.
Resta 1 arquivo.
Restam 2 arquivos.