#include <stdio.h>

int main()
{
	int num;
	printf("Dear user\nplease enter the you want to check:\n");
	scanf("%d",&num);
	
	//using conditional operator
	((num%2)==0)?printf("%d is even",num):printf("%d is odd",num);
	return 0;
}

// anater method to write a program which check if the number is even or odd 
/*
int main()
{
	int num;
	printf("dear user\nplease enter a number:\n");
	scanf("%d",&num);
	
	if((num%2)==0)
	{
		printf("%d is even\n",num);
	}
	else
	{
		printf("%d is odd\n",num);
	}
	
	return 0;
}