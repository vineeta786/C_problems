#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<8;i++)
	{
		if(i<=4)
		{
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
		}
		if(i>4)
		{
			for(k=2;k<i;k++)
			printf("*");
		}
		
			printf("\n");
	}
}
