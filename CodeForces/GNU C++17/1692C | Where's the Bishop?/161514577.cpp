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
  int t; cin>>t;
  while(t--)
  {
  vector<int>flag;
    //vector<int>flag2={0};
  int flag2[9]={0};
  char ch[8][8];
int counter=0;
  for(int i=0;i<8;i++)
  {
    int cnt=0;
    for(int j=0;j<8;j++)
    {
      counter=0;
      cin>>ch[i][j];
      if(ch[i][j]=='#')
      {
        cnt++;
        counter++;
        flag2[j]++;
      }
 
    }
 
    //cout<<cnt<<endl;
        flag.push_back(cnt);
  }
//    for(int i=0;i<8;i++)
//     {
// cout<<flag[i]<<' ';
// cout<<flag2[i]<<endl;
//     }
  int x,y;
  for(int i=1;i<8;i++)
  {
 
   if(flag2[i-1]==2&&flag2[i]==1&&flag2[i+1]==2)
   {
    y=i+1;
   break;
   }
  
  }
  for(int i=1;i<8;i++)
  {
 
   if(flag[i-1]==2&&flag[i]==1&&flag[i+1]==2)
   {
    x=i+1;
   break;
   }
  
  }
  cout<<x<<' '<<y<<endl;
}
}
 
 
//flag// saf
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 