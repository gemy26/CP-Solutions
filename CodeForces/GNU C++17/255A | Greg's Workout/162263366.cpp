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
  vector<int >E1;
  vector<int>E2;
  vector<int>E3;
  int a[n];
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    int x; cin>>x;
    if(cnt==0){E1.push_back(x);cnt++;continue;}
    if(cnt==1){E2.push_back(x);cnt++;continue;}
    if(cnt==2){E3.push_back(x);cnt=0; continue;}
    
  }
int back=0,chest=0,biceps=0;
for(int i=0;i<E3.size();i++)
back+=E3[i];
for(int i=0;i<E2.size();i++)
biceps+=E2[i];
for(int i=0;i<E1.size();i++)
chest+=E1[i];
 
if(chest>back&&chest>biceps){cout<<"chest";return 0;}
if(biceps>back&&biceps>chest){cout<<"biceps"; return 0;}
else
{cout<<"back";}
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 