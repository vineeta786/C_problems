#include<stdio.h>
main()
{
	float l,b,a;
	printf("enter the lenght and breadth of the rectangle\n");
	scanf("%f%f",&l,&b);
	a=l*b;
	printf("the area of the rectangle is %f\n",a);
	
	printf("enter the base and height of the triangle\n");
	scanf("%f%f",&b,&l);
	a=(b*l)/2;
	printf("the area of the triangle is %f\n",a);
}
