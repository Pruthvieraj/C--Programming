#include <stdio.h>

int charToDigit(char ch1,  char ch2, char ch3)
{
	if((ch1>='0' && ch1<='9') && (ch2>='0' && ch2<='9') && (ch3>='0' && ch3<='9')){
		int digit1 = ch1 - '0'; 
        int digit2 = ch2 - '0';
        int digit3 = ch3 - '0';

        int number = digit1 * 100 + digit2 * 10 + digit3;
        return number;
	}else{
		printf("Please enter character from ('0'-'9') only!");
		return -1;
	}
}

int main()
{
	char c1, c2, c3;
	int res;
	printf("Enter 3 characters: ");
	scanf("%c %c %c", &c1, &c2, &c3);
	res=charToDigit(c1,c2,c3);
	if(res=!-1){
	printf("%d", res);	
	}
	
	return 0;
}
