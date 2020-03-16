#include<stdio.h>
main()
{
	int n,a,b,c,d;
		printf("Enter a 3 digit number\n");
		scanf("%d",&n);
		
		a=n/100;
		b=n/10;
		b=b%10;
		b=b*10;
		c=n%10;
		c=c*100;
		
		d=a+b+c;
		
			if(n==d)
				printf("The number %d is paralloid in nature\n",n);
			else
				printf("The number %d is not paralloid in nature\n",n);
					
		
		
}

