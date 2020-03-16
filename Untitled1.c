#include<stdio.h>
main()
{
	int n,pro=1;
	while(n!=0)
	{
		printf("enter number\n");
		scanf("%d",&n);
		if(n==0)
		break;
		
		pro=pro*n;
		
		
	}
		printf("The product is = %d",pro);
	}

