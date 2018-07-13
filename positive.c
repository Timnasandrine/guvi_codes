#include <stdio.h>

int main() 
{
	int n;
	printf("Enter a number to check Positive or Negative:");
	scanf("%d", &n);
	
	if(n<0)
	{
		printf("\nThe number is Negative!");
	}
	else if(n>=1)
    {
    	printf("\nThe Number is Positive!");
    }
    else
    {
    	printf("\nThe Number you entered is %d (Zero)", n);
    }
   return 0;
}
