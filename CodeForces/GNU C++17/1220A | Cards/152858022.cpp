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
  string s;
  int size;
  cin>>size;
  cin>>s;
  int z=0,e=0,r=0,o=0,n=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='z'){z++;}
    if(s[i]=='e'){e++;}
    if(s[i]=='r'){r++;}
    if(s[i]=='o'){o++;}
    if(s[i]=='n'){n++;}
    if(s[i]=='e'){e++;}
 
  }
  int one=min({e,n,o});
  int zero=min({z,e,r,o});
 for(int i=0;i<one;i++)
 {
  cout<<1<<" ";
 }
 for(int i=0;i<zero;i++)
 {
  cout<<0<<" ";
 }
    
  
 
}