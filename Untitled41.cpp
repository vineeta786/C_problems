#include <iostream>
using namespace std;
int main()
{
	int N,T,fac=1;
	cin>>T;

	while(T--)
	{
		cin>>N;
		fac=1;
			while(N>1)
			{
				fac=fac*N;
				N--;
			}
			cout<<fac<<endl;
				
	}
	return 0;

	
}

