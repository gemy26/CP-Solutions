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
  long long a,b;
  cin>>a>>b;
 if(b-a+1<3){
   cout<<-1; return 0;}
  
  
    if(a%2==0)
    {
      cout<<a<<" "<<a+1<<" "<<a+2;
      return 0;
    }
    
  
    
      if(((b-a)+1)>3)
      {
        cout<<a+1<<" "<<a+2<<" "<<a+3;
        return 0;
      }
      
    
    else
      cout<<-1;
    
  
 
}