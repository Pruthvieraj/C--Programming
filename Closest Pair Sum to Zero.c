#include <stdio.h>
#define SIZE 5

int main()
{
	int arr[SIZE];
	int i, j;

	printf("Enter the array Elements:\n");
	for(i=0; i<SIZE; i++)
	{
		printf("Enter element-%d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	int reqSum=arr[0]+arr[1];
	
	for(i=0; i<SIZE; i++){
		for(j=1; j<SIZE; j++){
			if (i!=j)
			{
			if (abs(arr[i]+arr[j])<abs(reqSum)){
				reqSum=arr[i]+arr[j];
			}
			}
		}
	}
	
	printf("The sum of 2 elements closest to zero is %d", reqSum);
	
	return 0;
}
	
	
