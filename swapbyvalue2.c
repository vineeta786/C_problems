#include<stdio.h>
void swapbyvalue(int *x,int *y);
int main()
{
	int n1,n2;
	printf("Enter numbers\n");
	scanf("%d%d",&n1,&n2);
	swapbyvalue(&n1,&n2);
	printf("Value after swap %d %d",n1,n2);
	
}
void swapbyvalue(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
