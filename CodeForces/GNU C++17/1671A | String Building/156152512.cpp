#include <bits/stdc++.h>
#include <string>
#define ll long long
#define el "\n"
#define r return 0;
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
 cin>>t;
 while(t--)
 {
  int A=0,B=0;
  string s;
  cin>>s;
  int n=s.size();
  if(s.size()==1){
    cout<<"NO"<<endl;continue;
  }
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='a')A++;
    else  B++;
  }
  if(A==1||B==1){
    cout<<"NO"<<endl;continue;
  }
  if(s.find("aba")!=-1||s.find("bab")!=-1||(s[0]=='a'&&s[1]=='b')||(s[1]=='a'&&s[0]=='b')||(s[n-1]=='a'&&s[n-2]=='b')||(s[n-1]=='b'&&s[n-2]=='a'))
  {
    cout<<"NO"<<endl;
  }
   else
    cout<<"YES"<<endl;
 }
 
 
}