#include <stdio.h>

int main()
{
	//declare two variables to store two numbers
	int num1,num2;
	
	//read the values from user
	printf("enter two numbers dear user:\n");
	scanf("%d %d",&num1,&num2);
	
	//swap the values of num1 and num2 without sding a temporary variable
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	
	//display the values after swapping 
	printf("after swaping num1 = %d\nafter swaping num2 = %d",num1,num2);
	return 0;
	 


}