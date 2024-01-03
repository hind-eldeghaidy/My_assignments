#include <stdio.h>

int main()
{
	char operator;
	float num1,num2,result;
	
	printf("Dear user\nplease enter the operator:\n'+'\n'-'\n'*'\n'/'");
	scanf("%c",&operator);
	
	printf("Dear user\nplease enter two numbers:\n");
	scanf("%f %f",&num1,&num2);
	
	switch(operator)
	{
		case '+':
		result = num1 + num2;
		break;
		
		case '-':
		result = num1 - num2;
		break;
		
		case '*':
		result = num1*num2;
		break;
		
		case '/':
		if(num2 != 0)
		{
			result = num1/num2;
		}
		else
		{
			printf("Error:division by zero!\n");
			return 1;  // exit the program with an error code
		}
		break;
		
		default:
		printf("Error: you entered invalid operator\n");
		break;	
	}
	
	printf("result = %0.1f",result);
	return 0;
}