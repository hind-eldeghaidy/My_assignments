#include <stdio.h>

int main()
{
	char ch;
	printf("Dear user\nplease enter an alphabet:\n");
	scanf("%c",&ch);
	
	if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='u')||(ch=='U')||(ch=='o')||(ch=='O'))
	{
		printf("%c is vowel",ch);
	}
	else{
		printf("%c is consonant",ch);
	}
	return 0;
}
