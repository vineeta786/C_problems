#include<stdio.h>
void main()
{
	int n[20],i,j;
	printf("How many numbers are to be entered\n");
	scanf("%d",&j);
	printf("Now enter the numbers\n");
	
	
	for(i=1;i<j;i++)
	{
		scanf("%d",n[i]);
	}
	
	for(i=1;i<j;i++)
	{
		if(n[i]==42)
		continue;
		else
		printf("%d\n",n[i]);
	}
	
} 
