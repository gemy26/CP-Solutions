#include <bits/stdc++.h>
using namespace std;
/*bool isprime(int x)
{
  for (int i = 2; i <= x / i; i++)
    if (x % i == 0)
      return false;
  return true;
}*/
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int res; int x;
    int a[n];
    int frq[103]={0};
    for( int i=1; i<=n ; i++ ){
      cin>>a[i];
      frq[a[i]]++;
    }
       for(int i=1;i<103;i++)
       {
        if(frq[i]==1)
        {
          x=i;
          for(int i=1;i<=n;i++)
          {
            if(x==a[i])
            {
              cout<<i<<endl;
            }
          }
          
        }
       }
    }
 
}