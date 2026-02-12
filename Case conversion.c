#include <stdio.h>

int main()
{
	char accepted, converted; 
	
	printf("Enter a character: ");
	scanf("%c", &accepted);
	
	if('A'<= accepted && accepted <='Z'){
		converted=accepted+32;
	} else if ('a'<=accepted && accepted<='z'){
		converted=accepted-32;
	} else {
		printf("Input is not a valid alphabet character.\n");
        return 1;
	}
	printf("Accepted Character: %c\nConverted Character: %c\n", accepted, converted);
	
	return 0;
}
