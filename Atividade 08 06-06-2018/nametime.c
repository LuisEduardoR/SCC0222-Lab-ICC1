#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[32];
    int startTimeSec;
    int endTimeSec;
} competitor;

int main (int argc, char* argv[]) {

    int nComp;
    scanf(" %d ", &nComp);

    competitor* comps = (competitor*)malloc(nComp * sizeof(competitor));

    int compsRead = 0;
    int compsFinished = 0;
    while(compsRead < nComp || compsFinished < nComp) {

        char* tempName = (char*) malloc(32 * sizeof(char));
        int tempH, tempM, tempS;
        scanf(" %s %d:%d:%d", tempName, &tempH, &tempM, &tempS);

        int repeatedComp = -1;
        for(int j = 0; j < (compsRead); j++) {
            if(strcmp(tempName, comps[j].name) == 0) {
                repeatedComp = j;
                break;
            }
        }

        if(repeatedComp == -1) {
            strcpy(comps[compsRead].name, tempName);
            comps[compsRead].startTimeSec = (tempH * 3600) + (tempM * 60) + tempS;
            compsRead++;
        } else {
            comps[repeatedComp].endTimeSec = (tempH * 3600) + (tempM * 60) + tempS;
            if(comps[repeatedComp].endTimeSec < comps[repeatedComp].startTimeSec)
                comps[repeatedComp].endTimeSec += (24 * 3600);
            compsFinished++;
        }

        free(tempName);

    }

    for(int i = 0; i < nComp; i++) {

        long long unsigned int deltaTime = comps[i].endTimeSec - comps[i].startTimeSec;

        int hour = deltaTime / 3600;
        int min = (deltaTime - (hour*3600)) / 60;
        int sec = deltaTime%60;

        printf("%s levou %02d:%02d:%02d.\n", comps[i].name, hour, min, sec);

    }

    free(comps);

    return 0;
}
