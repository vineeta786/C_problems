#include <iostream>
using namespace std;
int main()
{
	int N,T,rev,rem;
	cin>>T;

	while(T--)
	{
			cin>>N;
		while(N!=0)
		{
			rem=N%10;
			N=N/10;
			rev=rem+rev*10;
		}
			cout<<rev<<endl;
	}
	return 0;

	
}

