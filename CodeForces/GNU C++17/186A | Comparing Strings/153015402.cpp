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
 string s1;
 string s2;
 cin>>s1>>s2;
 int cnt=0;
 int temp;
 int flag=0;
 if(s1.size()!=s2.size()){cout<<"NO"; return 0;}
 if(s1==s2){cout<<"YES"; return 0;}
 else{
  for(int i=0;i<s1.size();i++)
  {
    if(s1[i]!=s2[i]&&cnt==0)
    {
       temp=i;
       cnt=1;
       continue;
    }
    if(flag==1){cout<<"NO";return 0;}
    if(s1[i]!=s2[i]&&cnt==1)
    {
       swap(s1[i],s1[temp]);
       flag++;
       if(s1==s2){cout<<"YES";return 0;}
       else{cnt=0;}
    }
  }
  cout<<"NO";
 }
}