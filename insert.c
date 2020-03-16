#include<stdio.h>
main()
{
	int a[20],i,j,n,m,k;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	
	printf("Now enter the elements\n");
	for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	
	printf("Enter the element and which place it would be inserted\n");
	scanf("%d%d",&k,&m);
	m=m-1;
	n=n+1;
	j=0;
	for(i=m;i<n;i++)
	{
		a[n-j]=a[n-j-1];
		j++;
	}
	a[m]=k;
	
	printf("The new array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
