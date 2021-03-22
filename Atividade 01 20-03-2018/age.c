#include <stdio.h>

int main (int argc, char* argv[]) {
	
	unsigned long int add;
	unsigned long int prod;

	scanf("%lu %lu", &add, &prod);

	unsigned long int n;
	unsigned long int m;

	for (int i = 0; i < (add / 2 + 1); i++) {

		if(((add - i) * i)  == prod) {

			n = i;
			m = (add - i);
			i = add;
			break;
		}

	}

	printf("As idades sao %lu e %lu anos.\n", n, m); 

	return 0;
}