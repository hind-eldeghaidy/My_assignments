#include <stdio.h>

int main ()
{
	//declare 2 variables to store 2 numbers
	int num1 ,num2;
	
	// read the values from the user
	printf("please enter two numbers:\n");
	scanf("%d %d",&num1,&num2);
	
	//swap the value of num1 and num2 using a temporary variable
	int temp = num1;
	num1 = num2;
	num2 = temp;
	
	//display the swapped values
	printf("after swapping number 1 :%d\nafter swapping number 2 :%d",num1,num2);
	return 0;

	
}