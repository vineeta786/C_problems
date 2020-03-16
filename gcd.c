#include<stdio.h>
int gcd(int,int);
int main()
{
	int a,b,res;
	printf("Enter the number\n");
	scanf("%d%d",&a,&b);
	res=gcd(a,b);
	printf("GCD is %d\n",res);
}
int gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			return gcd(a-b,b);
		}
		else
		{
			return gcd(a,b-a);
		}
		return 0;
	}
}
