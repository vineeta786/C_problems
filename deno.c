#include<stdio.h>
main()
{
	int a,b;
	printf("enter the amount\n");
	scanf("%d",&a);
	b=a/1000;
	printf("the number of 1000 notes is %d\n",b);
	a=a%1000;
	b=a/500;
	printf("the number of 500 notes is %d\n",b);
	a=a%500;
	b=a/100;
	printf("the number of 100 notes is %d\n",b);
	a=a%100;
	b=a/50;
	printf("the number of 50 notes is %d\n",b);
	a=a%50;
	b=a/20;
	printf("the number of 20 notes is %d\n",b);
	a=a%20;
	b=a/10;
	printf("the number of 10 notes is %d\n",b);
	a=a%10;
	b=a/5;
	printf("the number of 5 notes is %d\n",b);
	a=a%5;
	b=a/1;
	printf("the number of 1 notes is %d\n",b);
}
