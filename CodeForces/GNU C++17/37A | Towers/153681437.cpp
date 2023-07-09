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
  
  int n;
 int maxi=-9999999;
 int sum=0;
 cin>>n;
 int frq[9999]={0};
 int a[n];
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }
 for(int i=0;i<n;i++)
 {
  frq[a[i]]++;
 }
 for(int i=0;i<=1000;i++)
 {
  if(frq[i]){
    sum++;
  }
  if(frq[i]>maxi){
    maxi=frq[i];
  }
 }
 
 cout<<maxi<<" "<<sum;
 
  
  }