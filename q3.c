#include<stdio.h>
main()
{
	int i,n,j;
	
	printf("Enter the number to print the table\n");
	scanf("%d",&n);
	
	for(i=1;i<13;i++)
	printf("%d * %d = %d\n",n,i,n*i);
}
