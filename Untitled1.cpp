#include <bits/stdc++.h>

using namespace std;
int main()
{
	int N,temp=0;
	scanf("%d",&N);
	int a[N];
	for(int i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<N;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	for(int i=0;i<N;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
