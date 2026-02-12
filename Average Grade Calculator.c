#include <stdio.h>
int main()
{
	int sub, i=0;
	float score, sum=0;
	printf("Enter the number of subjects: ");
	scanf("%d", &sub);
	
	while(i<sub)
	{
		printf("Enter the score of subject %d:", i+1);
		scanf("%f", &score);
		sum+=score;
		i++;
	}
	
	printf("Average grade: %.2f", (float)sum/sub);
	return 0;
}
