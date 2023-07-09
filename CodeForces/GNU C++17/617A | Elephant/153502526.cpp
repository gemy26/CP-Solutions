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
  cin>>n;
  int sum=0;
  while(n>0){
    n-=5;
    sum++;
  }
  cout<<sum;
}