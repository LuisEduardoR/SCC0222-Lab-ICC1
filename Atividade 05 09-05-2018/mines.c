#include <stdio.h>

int main () {

	int x, y;
	
	scanf(" %d", &x);
	scanf(" %d", &y);
	
	int field[x][y];
	
	int a, b;
	for (a = 0; a < x; a++) {
		for (b = 0; b < y; b++) {
			field[a][b] = 0;
		}
	}
	
	for (a = 0; a < x; a++) {
		for (b = 0; b < y; b++) {
			
			char current;
			
			scanf(" %c", &current);
			
			if(current == '*'){
				
				if(a > 0) {
					if(b > 0) {
						if(field[a-1][b-1] != -1)
							field[a-1][b-1]++;
					}
					
					if(field[a-1][b] != -1)
						field[a-1][b]++;
						
					if(b < (y-1)) {
						if(field[a-1][b+1] != -1)
							field[a-1][b+1]++;
					}
				}
				
				if(b > 0) {
					if(field[a][b-1] == -1)
						field[a][b-1] = -1;
					else
						field[a][b-1]++;
				}
					
					field[a][b] = -1;
						
				if(b < (y-1)) {
					if(field[a][b+1] != -1)
						field[a][b+1]++;
				}
				
				if(a < (x-1)) {
					if(b > 0) {
						if(field[a+1][b-1] != -1)
							field[a+1][b-1]++;
					}
					
					if(field[a+1][b] != -1)
						field[a+1][b]++;
						
					if(b < (y-1)) {
						if(field[a+1][b+1] != -1)
							field[a+1][b+1]++;
					}
				}
			}
		}
	}
	
	for (a = 0; a < x; a++) {		
		for (b = 0; b < y; b++) {
			if(b != (y-1)) {
				if(field[a][b] == -1)
					printf("* ");
				else 
					printf("%d ", field[a][b]);
			} else {
				if(field[a][b] == -1)
					printf("*");
				else 
					printf("%d", field[a][b]);
			}
		}
		printf("\n");
	}
}

