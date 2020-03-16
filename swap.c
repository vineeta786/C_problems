#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	printf("%d\n",a);
	printf("%d\n",b);
	c=b;
	b=a;
	a=c;
	printf("%d\n",a);
	printf("%d\n",b);
	
}
