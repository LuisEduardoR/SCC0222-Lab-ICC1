# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main (int argc, char* argv[]) {

    char readFilename[100];
    scanf("%s", readFilename);

    FILE* readFile = NULL;
    readFile = fopen(readFilename, "r");

    FILE* outFile = NULL;
    outFile = fopen("saida.txt", "w");

    if(readFile == NULL || outFile == NULL) {
        printf("Error opening/creating file!\n");
        return -1;
    }

    unsigned ignoredEntries = 0;
    char ignoredWords[50][100];

    char tempWord[100];

    while (scanf(" %s", tempWord) != EOF) {
        strcpy(ignoredWords[ignoredEntries], tempWord);
        ignoredEntries++;
    }

    // DEBUGING: ===========================================
    /*
    for (int i = 0; i < ignoredEntries; i++)
        printf("%s\n", ignoredWords[i]);
    */
    // =====================================================

    unsigned wordNumber = 0;
    unsigned ignoredNumber = 0;

    while (fscanf(readFile, " %s", tempWord) != EOF) {
        wordNumber ++;

        int ignore = 0;
        for (int i = 0; i < ignoredEntries; i++) {
            if(strcmp(tempWord, ignoredWords[i]) == 0) {
                ignore = 1;
                break;
            }
        }

        if(ignore == 1) {
            ignoredNumber++;
        } else {
            fprintf(outFile, "%s ", tempWord);
        }
    }

    printf("Palavras lidas: %d\n", wordNumber);
    printf("Palavras ignoradas: %d\n", ignoredNumber);

    fclose(readFile);
    fclose(outFile);

}
