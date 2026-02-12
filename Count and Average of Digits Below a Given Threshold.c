#include <stdio.h>

float amountAndAverage(int number, int digit)
{
	int count=0;
	int sum=0;
	
	if(number<0){
		number=number*(-1);
	}
	
	while(number!=0)
	{
		if(number%10<digit){
			count++;
			sum+=number%10;
		}
		number=number/10;
	}
	
	if (count == 0) {
		return 0;
	}
	printf("Total number of digits in the given number less than %d is %d\n", digit, count);
	return ((float)sum/count);
}

int main()
{
	int num, d;
	printf("Enter a number:");
	scanf("%d", &num);
	printf("Enter a digit for comparison:");
	scanf("%d", &d);
	
	printf("Average of the digits less than %d is %f", d, amountAndAverage(num, d));
	
	return 0;
}
