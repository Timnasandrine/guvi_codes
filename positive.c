#include <stdio.h>

int main() 
{
	int n;
	scanf("%d", &n);
	
	if(n<0)
	{
		printf("\n Negative");
	}
	else if(n>=1)
    {
    	printf("\n Positive");
    }
    else
    {
    	printf("\n Zero", n);
    }
   return 0;
}
