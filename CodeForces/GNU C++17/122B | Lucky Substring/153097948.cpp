#include <bits/stdc++.h>
#include <string>
#define ll long long
#define el "\n"
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
 cin>>s;
 int f=0;int se=0;
 for(int i=0;i<s.size();i++)
 {
  if(s[i]=='4'){f++;}
  if(s[i]=='7'){se++;}
 }
 if(se==0&&f==0){cout<<-1;return 0;}
 if(se>f){cout<<7;return 0;}
 else{cout<<4;return 0;}
}
  
  