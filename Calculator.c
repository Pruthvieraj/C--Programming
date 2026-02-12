#include <stdio.h>
int main() 
{
	//Switch Case Program in C Showing Working of Basic Calculator
	
	char operator;
    double num1, num2, result;
    
    printf("CALCULATOR\n");
    printf("Enter two numbers:");
    scanf("%lf %lf", &num1, &num2);
    
    printf("Enter an operation(+,-,*,/) to perform:");
    scanf(" %c", &operator);
 
    switch (operator)
	{
		case '+':
			result = num1 + num2;
			printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
	        break;
 
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
 
        case '*':
 	        result = num1 * num2;
	        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
	        break;
 
        case '/':
            if (num2 == 0) 
			{
			printf("Error: division by zero!\n");} 
            else 
            {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);}
            break;
 
        default:
            printf("Invalid operator!\n");
    }
    return 0;
 }
