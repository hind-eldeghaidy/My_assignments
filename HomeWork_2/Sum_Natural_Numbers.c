#include <stdio.h>

int main()
{
	int num,sum;
	printf("Dear user\nplease enter a positive number:\n");
	scanf("%d",&num);
	
	if(num>=0)
	{
		//calculate the sum of natural numbers up to num
		for(int i=1;i<=num;++i)
		{
			sum+=i;  // sum =sum+i
		}
	printf("the sum of %d is %d",num,sum);
	}
	else 
	{
		printf("please enter a positive number\n");
	}
	
	
	return 0;
}

// write c program to calculate sum of natural numbers by using while loop
/*
int main()
{
	int num ,sum,i;
	printf("enter a positive number :\n");
	scanf("%d",&num);
	i=1;
	while(i<=num)
	{
		sum+=i;
		i++;
	}
	printf("the sum od %d is %d",num,sum);
	return 0;
		
}*/