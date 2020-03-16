#include<stdio.h>
main()


{
	int i,a,b,arr[20],n,j,k,arr1[20],arr2[20];
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array");
	
	for(i=0;i<n;i++)
	{
			scanf("%d",&arr[i]);
	}	
	
	printf("Enter the amount by which you want array to be rotated\n");
	scanf("%d",&j);
	
	for(i=0,k=j;k<n;i++,k++)
{
	arr1[i]=arr[k];	
}

	for(i=0,k=j-1;k>=0;i++,k--)
	{
		arr2[i]=arr[k];
	}
	
	for(i=0;i<n-j;i++)
	{
		arr[i]=arr1[i];
	}
	for(k=0;k<n;k++)
	    arr[i+k]=arr2[k];
printf("The rotated array is\n");
for(i=0;i<n;i++)
{
	
	printf("%d",arr[i]);
}
}
