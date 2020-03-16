#include<stdio.h>
main()
{
	int r,*p,a;
	p=&r;
	printf("Enter the radius of the circle\n");
	scanf("%d",p);
	a=3.14*(*p)*(*p);
	printf("The area of the required circle is %d\n",a);
}
