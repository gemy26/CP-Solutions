#include <bits/stdc++.h>
using namespace std;
bool isprime(int x)
{
  for (int i = 2; i <= x / i; i++)
    if (x % i == 0)
      return false;
  return true;
}
int main()
{
 int t;
 int o=0;
 int p=0;
 cin>>t;
 while(t--)
  {
    int x,y;
    cin>>x>>y;
    
 
    if(x<0){
      o++;
    }
     else
     {
      p++;
     }
  }
  
    if(o<=1||p<=1)
    {
      cout<<"yes";
      return 0;
    }
     
     else
     {
      cout<<"no";
     }
  
 
 
 
 
}