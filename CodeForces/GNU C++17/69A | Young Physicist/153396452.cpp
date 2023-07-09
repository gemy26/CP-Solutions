#include <bits/stdc++.h>
#include <string>
#define ll long long
#define el "\n"
#define r return 0;
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
 int n;
 cin>>n;
 
 int a[n][3];
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<3;j++)
  {
    cin>>a[i][j];
  }
 }
 int x=0;int y=0; int z=0;
 int sum=0;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<3;j++)
  {
    if(j==0) x+=a[i][j];
    if(j==1) y+=a[i][j];
    if(j==2) z+=a[i][j];
  }
 }
 
 if(x==0&&y==0&&z==0)cout<<"YES";
 else cout<<"NO";
}
  