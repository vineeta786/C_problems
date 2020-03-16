#include<stdio.h>
struct complex
{
	int real;
	int imag;
};
int main()
{
struct complex a[2];
int i,c,j;

printf("Enter the real and imaginery parts\n");


for(i=0;i<2;i++)
	{
 		scanf("%d%d",&a[i].real,&a[i].imag);
	}	
	
	c=a[i].real+j*a[i].imag;
printf("Enter the real and imaginery parts %d\n",c);
	
}
