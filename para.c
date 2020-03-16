#include<stdio.h>
#include<math.h>
main()
{
	int n,a,b,c,d;
	printf("enter a 3 digit number\n");
	scanf("%d",&n);
	
	a=n/100;
	b=n/10;
	b=b%10;
	c=n%10;
	
	d=pow(a,3)+pow(b,3)+pow(c,3);
	
		if(n==d)
			printf("The number is amstrong number\n");
			
		else
			printf("The number is not amstrong number\n");
				
	
	
	
		
}
