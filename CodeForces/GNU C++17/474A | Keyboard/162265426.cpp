#include<bits/stdc++.h>
#define  ll long long
//#define r return 0
#define yes cout<<"YES";
#define no cout<<"NO";
#define el cout<<"\n";
const int AK=5e5+5;
const long long VVB=5e9+5; 
using namespace std;
bool isprime(int x)
{
  for (int i = 2; i <= x / i; i++)
    if (x % i == 0)
      return false;
  return true;
}
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
    return gcd(a-b, b);
    return gcd(a, b-a);
}
 
int main()
{
  char c;
  cin>>c;
  vector<char>ch={' ','q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
 
vector<int>index;
string s; cin>>s;
if(c=='R'){
for(int i=0;i<s.size();i++)
{
  char cc=s[i];
  for(int j=1;j<ch.size();j++)
  {
    if(cc==ch[j])
      index.push_back(j-1);
  }
}
 
 
for (int i = 0; i < index.size(); ++i)
{
 cout<<ch[index[i]];
}
}
else
{
 
 
  for(int i=0;i<s.size();i++)
{
  char cc=s[i];
  for(int j=1;j<ch.size();j++)
  {
    if(cc==ch[j])
      index.push_back(j+1);
  }
}
 
 
for (int i = 0; i < index.size(); ++i)
{
 cout<<ch[index[i]];
}
 
 
}
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 