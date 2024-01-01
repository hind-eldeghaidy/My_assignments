#include <stdio.h>

int main()
{
	//declar a variable to store a character 
	char ch;
	
	//read the character from the user 
	printf("enter a character:\n");
	scanf("%c",&ch);
	
	//find and display the ASCII value of the character 
	printf("the ASCII value of '%c' is %d",ch,(int)ch);
	return 0;
}