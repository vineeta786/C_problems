#include<stdio.h>
main()
{
	int x[2]={3,5},y[2]={1,7};
	int dis,*p[2],*q[2],i=0;
	p[i]=&x[i];
	q[i]=&y[i];
	dis=pow(pow((*p[1]-*p[0]),2)+pow((*q[1]-*q[0]),2),0.5);
	printf("The distance between the points is %d\n",dis);
}
