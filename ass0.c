#include<stdio.h>
void main()
{
	int i,j,k,num,count;
	printf("Enter the number of rows\n");
	scanf("%d",&num);
	
	for(k=1;k<=num;k++)
	{
		for(i=1;i<=count;i++)
		{
		
			printf(" ");
			count--;
	}
		
		for(i=1;i<=2*k-1;i++)
		{
		
			printf("*");
			printf("\n");
	}
	}
	count=1;
	
	for(k=1;k<=num-1;k++)
	{
		for(i=1;i<=count;i++)
		{
		printf(" ");
		count++;
	}
}
	for(i=1;i<=2*(num-k)-1;i++)
	{
		printf("*");
		printf("\n");
	}
	return 0;
	
}
