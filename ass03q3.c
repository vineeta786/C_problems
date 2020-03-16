#include<stdio.h>
main()
{
	int a[10],i,j=0,k=0,n,b[10],c[10];
	printf("Enter the Elements\n");
	scanf("%d",&n);
	printf("Now enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			k++;
			b[i]=a[i];
		}
		else
		{
			j++;
			c[i]=a[i];
		}
	}
	printf("There are %d even elements and %d odd elements\n",k,j);
	printf("The array of even elements is");
	for(i=0;i<k;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\n");
	printf("The array of odd elements is\n");
	for(i=0;i<j;i++)
	{
		printf("%d\t",c[i]);
	}
	}
