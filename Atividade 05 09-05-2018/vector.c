#include <stdio.h>
#include <math.h>

#define PI 3.14159265;

double scalarProduct(double* i, double* j, int dimension);
double vectorModule(double* i, int dimension);

int main () {

	int dimension;
	
	scanf(" %d", &dimension);
	
	double vectorI[dimension];
	double vectorJ[dimension];
	
	int i;
	for(i = 0; i < dimension; i++) {
	
		scanf(" %lf", vectorI + i);
	
	}
	
	int j;
	for(j = 0; j < dimension; j++) {
	
		scanf(" %lf", vectorJ + j);
	
	}	

	double moduleI, moduleJ;

	moduleI = vectorModule(vectorI, dimension);
	moduleJ = vectorModule(vectorJ, dimension);

	if(moduleI == 0 || moduleJ == 0) {
		
		printf("90.00 graus.\n");
		return 0;
		
	}

	double ang_cos = scalarProduct(vectorI, vectorJ, dimension) / (moduleI * moduleJ);
	
	double angle = acos(ang_cos);
	
	angle *= (double)180 / PI;

	printf("%0.2lf graus.\n", angle);

	return 0;
}

double scalarProduct(double* i, double* j, int dimension) {
	
	double result = 0;
	
	int a;
	for(a = 0; a < dimension; a++) {
	
		result += i[a] * j[a];
	
	}
	
	return result;
	
}

double vectorModule(double* i, int dimension) {
	
	double partialResult = 0;
	
	int a;
	for(a = 0; a < dimension; a++) {
	
		partialResult += pow(i[a], 2);
	
	}
	
	return sqrt(partialResult);
	
}

