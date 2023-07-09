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
 
 
  int n;
  cin>>n;
  string s[n];
  for(int i=0;i<n;i++)
cin>>s[i];
for(int i=0;i<n;i++)
{
  for(int j=0;j<5;j++)
  {
    if(s[i][j]=='O'&&s[i][j+1]=='O'){
      s[i][j]='+';s[i][j+1]='+';
      goto here;
    }
  }
}
cout<<"NO";return 0;
 
here:
 for(int i=0;i<n;i++){
  if(i==0)
  cout<<"YES"<<endl;
  cout<<s[i]<<endl;
 }
 
 
 
 
 
 
 
 
 
 
 
 
}
 
 
  
 
 
 
 