#include <bits/stdc++.h>
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
 int cnt=0;
 int cnt1=0;
 
 int x=s.find("1111111");
 int y=s.find("0000000");
 if(x!=-1||y!=-1)
 cout<<"YES";
else{cout<<"NO";}
}