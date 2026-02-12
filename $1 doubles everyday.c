#include <stdio.h>

int main()
{
    int i, days, total=1;
    
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    for (i = 1; i <= days; i++) 
    { 
      total=total*2;
    }
    printf("Final amount after %d days is: $%d", days, total);
    return 0;
}
