#include<stdio.h>
main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a%3==0&&a%7==0)
		printf("the number is divisible by both 3 and 7\n");
	else
		printf("the number is either not divisible by 3 or 7, or is not divisible by both\n");
			
}
