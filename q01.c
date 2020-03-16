#include<stdio.h>
void main()
{
	int i,j,k;
	
	for(i=0;i<5;i++)
	{
		for(k=4;k>0;k--)
		{
			printf(" ");
		}
		for(j=0;j<(2*i)+1;j++)
		{
		   printf(" * ");
		}
		printf("\n");
	}
}
