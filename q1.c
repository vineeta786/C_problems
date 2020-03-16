#include<stdio.h>
void main()
{

int i,j,k;
char arr[5][5]; 

	
	
	for(i=0;i<5;i++)
	{
			for(j=0;j<5;j++)
			scanf("%c",&arr[i][j]);
	}
		printf("*********\n"); 
	
	for(i=0;i<5;i++)
	{
			for(j=0;j<5;j++)
		{
			printf("%c",arr[i][j]);
		}
		
	}
	
		printf("*********\n"); 
}
