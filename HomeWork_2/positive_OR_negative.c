#include <stdio.h>

int main()
{
	float num;
	printf("Dear user\nplease enter a number :\n");
	scanf("%f",&num);
	
	if(num>0)
		printf("%0.1f is positive number \n",num);
	else if (num<0)
		printf("%0.1f is negative number \n",num);
	else
		printf("the number you entered is ZERO");
	
	return 0;
}