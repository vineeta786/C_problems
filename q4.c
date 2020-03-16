#include<stdio.h>
main()


{
	int i,a,arr[20],n,j,k;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array");
	
	for(i=0;i<n;i++)
	{
			scanf("%d",&arr[i]);
	}	
	
	printf("Enter the amount by which you want array to be rotated\n");
	scanf("%d",&j);
	
	for(i=j-1,k=n-1;i>=0;i--,k--)
{
	a=arr[i];
	
	arr[i]=arr[k];
	
	arr[k]=a;
	
}
printf("The rotated array is\n");
for(i=0;i<n;i++)
{
	
	printf("%d",arr[i]);
}
}
