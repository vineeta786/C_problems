#include<stdio.h>
#include<math.h>
main()
{
	int x1,x2,y1,y2,*p,*p1,*q,*q1,dis;
	printf("Enter the 2 points (x,y)\n");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	*p=&x1;
	*p1=&x2;
	*q=&y1;
	*q1=&y2;
	dis=pow(pow((*p1-*p),2)+pow((*q1-*q),2),0.5);
	printf("The distance between the points (%d,%d) and (%d,%d) is %d\n",*p,*q,*p1,*q1,dis);
}
