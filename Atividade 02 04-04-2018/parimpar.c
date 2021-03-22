#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	
	char notation, operation;
	int a, b, r;
	
	scanf("%c", &notation);
	
	switch (notation) {
		case 'E':
			scanf(" %c %d %d", &operation, &a, &b);
			switch (operation) {
				case '+':
					r = a + b;
					break;
				case '-':
					r = a - b;
					break;
				case 'x':
					r = a * b;
					break;
				case ':':
					r = a / b;
					break;
			}
			break;
		case 'I':
			scanf(" %d %c %d", &a, &operation, &b);
			switch (operation) {
				case '+':
					r = a + b;
					break;
				case '-':
					r = a - b;
					break;
				case 'x':
					r = a * b;
					break;
				case ':':
					r = a / b;
					break;
			}
			break;
		case 'O':
			scanf(" %d %d %c", &a, &b, &operation);
			switch (operation) {
				case '+':
					r = a + b;
					break;
				case '-':
					r = a - b;
					break;
				case 'x':
					r = a * b;
					break;
				case ':':
					r = a / b;
					break;
			}
			break;
	}
	
	if(r % 2 == 0)
		printf("O resultado %d eh par.", r);
	else
		printf("O resultado %d eh impar.", r);

	return 0;
}

