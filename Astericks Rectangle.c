#include <stdio.h>
int main()
{
	int i, j, row=5, column=10;
	
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
