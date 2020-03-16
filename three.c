#include<stdio.h>
main()
{
	int n,a,b,c;
	printf("enter a 3 digit number\n");
	scanf("%d",&n);
	
	a=n/100;
	b=n/10;
	b=b%10;
	c=n%10;
	
		if(a>b)
			{
				if(a>c)
					printf("the digit at hundreds place is largest %d\n",a);
				else
					printf("the digit at ones place is largest %d\n",c);
						
			}
		else if(b>c)
			{
				if(b>a)
					printf("the digit at tens place is largest %d\n",b);
				else
					printf("the digit at hundreds place is largest %d\n",a);
						
				}	
				
}
