#include<stdio.h>
main()
{
	char ch;
	int a,b;
	printf("Enter character in lowercase\n");
	scanf("%c",&ch);
	printf("The ASCII value of %c is %d\n",ch,ch);
	printf("In uppercase we have %c",ch-32);
}
