#include<stdio.h>
int area(int*,int*);
int main()
{
	int a,b,res,*h,*b1;
	h=&a;
	b1=&b;
	printf("Enter the height and base of the triangle\n");
	scanf("%d%d",h,b1);
	res=area(h,b1);
	printf("The area of the triangle is %d\n",res);
	return 0;
}

int area(int *x,int *y)
{
	int ar;
	ar=.5*(*x)*(*y);
	return (ar);
}
