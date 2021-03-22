#include <stdio.h>
#include <stdlib.h>

void freeMemory(int** day_vec, int day_count);

int main (int argc, char* argv[]) {
	
	int d;
	int r;

	scanf(" %d", &d);
	scanf(" %d", &r);

	int** days;
	days = malloc(d * sizeof(int*));

	int total_docs = 0;

	for (int i = 0; i < d; i++) {

		int doc_amount;
		scanf(" %d", &doc_amount);

		total_docs += doc_amount;

		days[i] = malloc((1 + doc_amount) * sizeof(int));
		days[i][0] = doc_amount;

		for (int j = 1; j <= doc_amount; j++)
		{
			scanf(" %d", &days[i][j]);
		}

	}

	int remain_docs = 0;
	for(int i = 0; i < d; i++) {

		remain_docs += days[i][0];
		int current_work = 0;
		for(int j = days[i][0]; j > 0; j--) {

			if(current_work + days[i][j] <= r) {

				current_work += days[i][j];

				days[i][j] = -1;
				remain_docs--;

			} else {
				current_work += days[i][j];
			}
		}
		
		if(current_work < r && remain_docs > 0) {

			for(int k = 0; k < i; k++) {

				for(int l = 1; l <= days[k][0]; l++) {

					if(days[k][l] != -1 && current_work + days[k][l] <= r) {

						current_work += days[k][l];

						days[k][l] = -1;
						remain_docs--;

					}
				}
			}
		}
		

		if(remain_docs == 0)
			printf("Todos os arquivos foram processados.\n");
		else if (remain_docs == 1)
			printf("Resta 1 arquivo.\n");
		else
			printf("Restam %d arquivos.\n", remain_docs);

	}

	freeMemory(days, d);
	return 0;

}

void freeMemory(int** day_vec, int day_count) {

	for(int i = 0; i < day_count; i++) {

		free(day_vec[i]);

	}

	free(day_vec);

}