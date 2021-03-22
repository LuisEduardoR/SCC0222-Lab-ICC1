# include <stdio.h>
# include <stdlib.h>

// Checa se a palavra e um palindromo.
int CheckForPalindrome (char* word, int len, int step) {

    // Retorna 1 caso o comprimento da palavra seja 0.
    if(len == 0)
        return 1;

    // Detecta ao final da analise que a palavra e um palindromo.
    if((len - 1) - step == step || step > (len - 1) - step) {
        return 1;
    }

    // Detecta que a palavra ja nao e um palindromo.
    if (word[step] != word[(len - 1) - step])
        return 0;

    // Faz o passo recursivo.
    return CheckForPalindrome(word, len, step+1);

}

int main (int argc, char* argv[]) {

    int length = 0;
    char* rWord = NULL;
    rWord = (char*)malloc(1024 * sizeof(char));

    // Recebe a palavra.
    char tempIn = 'x';
    while (tempIn != '\n' && tempIn != '\0' && tempIn != '\t' && tempIn != '\r' && tempIn != EOF && length < 1024) {

        tempIn = getchar();

        // Ignora espacos.
        if(tempIn != ' ' && tempIn != '\n' && tempIn != '\0' && tempIn != '\t' && tempIn != '\r'  && tempIn != EOF) {
            if (tempIn < 97) // Se a letra for maiuscula transforma (letra > 97 na tabela ASCII) em minuscula.
                rWord[length] = tempIn + 32; // Na tabela ASCII: maiuscula + 32 = minuscula.
            else
                rWord[length] = tempIn;
            length++;
        }

    }

    // Substitui o final da string por \0 se necessario.
    // Arruma o tamanho da string.
    if(tempIn != '\0') {
        if (length < 1024)
            rWord[length] = '\0';
    }

    // Detecta atraves da funcao recursiva se ha um palindromo.
    int isPalindrome = CheckForPalindrome(rWord, length, 0);

    if(isPalindrome != 0)
        printf("PALINDROMO!\n");
    else
        printf("Nao e palindromo. Ufa!\n");

    free(rWord);

    return 0;
}
