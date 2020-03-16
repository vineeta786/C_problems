#include<stdio.h>
main()
{
	int a,b;
	printf("enter a number\n");
	scanf("%d",&a);
	if(a%4==0)
	{
	
	 b=a/4;
		printf("the number is divisible by 4 and the quotient is %d",b);
	}
		else 
		 b=a*4;
		 	printf("the number is not divisible by 4 and the multiplication is %d\n",b);
}
