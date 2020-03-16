#include<stdio.h>
int main()
{
	int a[20],*p,n,i,sum=0;
	float avg=0;
	printf("How many elements do you want in the array\n");
	scanf("%d",&n);
	printf("Now enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a;
	for(i=0;i<n;i++)
	{
		sum=sum+*p;
		p++;
	}
		printf("The sum is %d\n",sum);
	
	avg=(float)sum/n;
	printf("The average is %f\n",avg);
	return 0;
}
