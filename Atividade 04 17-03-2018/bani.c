#include <stdio.h>

int main (int argc, char* argv[]) {

	int n_houses;
	scanf(" %d", &n_houses);

	int house[n_houses];
	int k_bunny = 0;

	for (int i = 0; i < n_houses; i++) {
		house[i] = 0;
	}

	while (1) {

		int h;
		scanf(" %d", &h);

		if(h != -1) {
			house[h]++;
			k_bunny++;
		} else {

			printf("%d coelhos catalogados:\n", k_bunny);

			for(int i = 0; i < n_houses; i++)
				printf("Casa %d: %d\n", i, house[i]);
			
			return 0;
		}

	}

	return 0;
}