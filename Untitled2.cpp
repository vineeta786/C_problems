#include <iostream>
using namespace std;
int main()
{
int t,n,i=0;
cin>>t;
	while(t--)
	{   int i=0;
		cin>>n;
		int b=n%10;
		if(b==4)
		i++;
		while((n/10)!=0)
		{
			n=n/10;
			int c=n%10;
			if(c==4)
			i++;
		}
		
		cout<<i<<endl;
	}	
}
