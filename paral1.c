#include<stdio.h>
main()
{
	int a,b,c,d,n;
	
	
		printf("Enter a 3 digit number\n");
		scanf("%d",&n);
		
		a=n/100;
		b=n%10;
		
			if(a==b)
				printf("The number %d is paralloid\n",n);
			else
				printf("The number %d is not paralloid\n",n);	
}
