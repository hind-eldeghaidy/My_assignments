#include <stdio.h>

int main()
{
	char ch;
	printf("Dear user\nplease enter an alphabet character:\n");
	scanf("%c",&ch);
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
		printf("%c is an alphabet\n",ch);
	else
		printf("%c isn't an alphabet\n",ch);
	
	return 0;

		
}