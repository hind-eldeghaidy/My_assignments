#include <stdio.h>

int main()
{
	float a,b,c;
	printf("Dear user\nPlease enter 3 numbers:\n");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a>=b && a>=c)
	{
		printf("largest number is %0.1f",a);
	}
	else if (b>=a && b>=c)
	{
	    printf("largest number is %0.1f",b);

	}
	else
	{
	    printf("largest number is %0.1f",c);
	}
	
	return 0;
	
}

// anather method by using if statment only 
/*
int main()
{
	float a,b,c;
	printf("enter 3 numbers");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a>=b && a>=c)
		printf("largest num is %0.1f",a);
	if(b>=a && b>=c)
		printf("largest num is %0.1f",b);
	if(c>=b && c>=a)
		printf("largest num is %0.1f",c);
	return 0;
		
}*/

//method by using if..else statment 
/*
int main()
{
	float a,b,c;
	printf("enter 3 numbers");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a>=b)
	{
		if(a>=c)
			printf("%0.1f is the largest",a);
		else
			printf("%0.1f is the largest",c);
	}
	else
	{
		if(b>=c)
			printf("50.1f is the largest",b);
		else
			printf("%0.1f is the largest",c);	
	}
	
	return 0;
}*/