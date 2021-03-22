# include <stdio.h>
# include <stdlib.h>

int main (int argc, char* argv[]) {

    int* candles = NULL;
    candles = (int*)malloc(1000000 * sizeof(int));

    for(int i = 0; i < 1000000; i++)
        candles[i] = 0;

    int n;
    scanf(" %d", &n);
    for(int i = 0; i < n; i++) {
        int c;
        scanf(" %d", &c);

        candles[c]++;
    }

    int max = -1;
    for(int i = 0; i < 1000000; i++) {
        if(candles[i] > max)
            max = candles[i];
    }

    if(max == 1)
        printf("%d desejo realizado.\n", max);
    else
        printf("%d desejos realizados.\n", max);


    free(candles);
    return 0;
    
}