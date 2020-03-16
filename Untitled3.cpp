# include <bits/stdc++.h>
using namespace std;
 int main()
 {
     int n,t,i,sum=0,c;
      cin>>t;
      while(t--)
      {
          cin>>n;
          sum=n%10;
          while(n/10!=0)
          {
              n/=10;
          }
           sum=sum+n%10;
           cout<<sum<<endl;
      }
 }
  
