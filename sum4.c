#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a 4 digit number");
	scanf("%d",&a);
	b=a/1000;
	c=a%10;
	printf("the digit at thousands place is %d\n",b);
	printf("the digit at ones place is %d\n",c);
	printf("the sum of these digits is %d\n", c+b);
}
