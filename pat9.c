#include<stdio.h>
main()
{
	int i,j,k,l;
	for(i='D';i>='A';i--)
	{
	
			for(j='A';j<=i;j++)
			{
				printf("%c",j);
				if(j==i)
				{
					for(k=i;k>='A';k--)
				{
					printf("%c",k);
				}
			}
			
		}
			printf("\n");
		}
	}

