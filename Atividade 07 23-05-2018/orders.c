#include <stdio.h>
#include <stdlib.h>

void addToQueue(int** queue, int* size, int n);
void removeFromQueue(int** queue, int* size);
int minOrder(int* queue, int size);
int maxOrder(int* queue, int size);

int main (int argv, char* argc[]) {

    int queueSize = 0;
    int* queue = NULL;

    int input;
    while (scanf(" %d", &input) != EOF) {

        if(input == 1) {

            int newOrder;
            scanf(" %d", &newOrder);

            addToQueue(&queue, &queueSize, newOrder);

        } else if(input == 2) {
            removeFromQueue(&queue, &queueSize);
        }  else if(input == 3) {
            printf("Menor senha: %d.\n", minOrder(queue, queueSize));
        }  else if(input == 4) {
            printf("Maior senha: %d.\n", maxOrder(queue, queueSize));
        }  else if(input == 5) {
            printf("Tamanho da fila: %d.\n", queueSize);
        }
    }

    free(queue);
}

void addToQueue(int** queue, int* size, int n) {

    if(*size < 1) {
        (*size) ++;
        *queue = (int*)malloc(sizeof(int) * (*size));
        (*queue)[(*size) - 1] = n;

    } else {
        (*size) ++;
        *queue = (int*)realloc(*queue, sizeof(int) * (*size));
        (*queue)[(*size) - 1] = n;

    }

}

void removeFromQueue(int** queue, int* size) {

    printf("Pedido %d entregue.\n", (*queue)[0]);

    for(int i = 0; i < ((*size) - 1); i++)
            (*queue)[i] = (*queue)[i+1];

    (*size) --;
    *queue = (int*)realloc(*queue, sizeof(int) * (*size));
}

int minOrder(int* queue, int size) {

    if(size < 1)
        return 0;

    int min = -1;

    for(int i = 0; i < size; i++)
        if(queue[i] < min || min == -1)
            min = queue[i];

    return min;

}

int maxOrder(int* queue, int size) {

    if(size < 1)
        return 0;

    int max = -1;

    for(int i = 0; i < size; i++)
        if(queue[i] > max)
            max = queue[i];

    return max;

}
