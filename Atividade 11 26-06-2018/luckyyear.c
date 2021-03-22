# include <stdio.h>

int main (int argc, char* argv[]) {

    int year;
    scanf(" %d", &year);

    int i = 0;
    int aux = 1;
    int check = 0;
    while(check <= year){

        i++;
        check += aux;

        if(i > 9){
            aux *= 10;
            check = aux;
            i = 0;
        }
    }

    int remain = check - year;

    if(remain == 1)
        printf("Falta %d ano.\n", remain);
    else
        printf("Faltam %d anos.\n", remain);
        
    return 0;
}