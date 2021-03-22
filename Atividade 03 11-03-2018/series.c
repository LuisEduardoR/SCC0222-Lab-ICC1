#include <stdio.h>
#include <math.h>

int main() {

	double x;
	int n;

	double result;
	double error;

	scanf(" %lf %d", &x, &n);

	result = 0;
	for (int i = 0; i < n; i++) {

		double factorial = 1;

		for (int j = 1; j <= (2*i + 1); j++) {

			factorial = factorial * j;
		}

		result = result + ((pow(-1, i) * pow(x, 2*i + 1)) / factorial);

	}

	error = result - sin(x);

	if(error < 0)
		error = (-1) * error;

	printf("O erro obtido eh %.6e.\n", error);

	return 0;
}