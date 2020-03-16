#include<stdio.h>
main()
{
	int i,a,sum;
	sum=0;
	for(i=1;i<4;++i)
	{
	a=i*i;
	sum=sum+a;
		printf("The sum is %d,%d\n",sum,a);	
	}
}
