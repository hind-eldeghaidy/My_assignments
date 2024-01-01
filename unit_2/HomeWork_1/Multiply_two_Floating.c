#include <stdio.h>

int main()
{
	float x , y;
	float multiplication; 
	printf("please enter two floating point numbers:\n");
	scanf("%f %f",&x,&y);
	multiplication = x*y;
	printf("multiplication = %f",multiplication);
	return 0;
}