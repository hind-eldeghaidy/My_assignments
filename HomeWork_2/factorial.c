#include <stdio.h>

int main()
{
	int number;
	int factorial = 1;
	
	printf("Dear usernplease enter a number:\n");
	scanf("%d",&number);
	
	for(int i=1; i<=number; i++)
	{
		factorial*=i;
	}
	
	printf("the factorial of %d = %d",number,factorial);
	
	return 0;
}