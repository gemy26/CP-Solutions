#include <bits/stdc++.h>
const int AK=5e5+5;
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
 
vector<int>v;
int n;
cin>>n;
int p;
cin>>p;
for(int i=0;i<n;i++)
{
  int x;
  cin>>x;
  v.push_back(x);
}
int counter=0;
 for(int i=1;i<n;i++)
 {
     if((p-1)-i>=0){
      if(v[p-i-1]==1&&v[p+i-1]==1)
        counter+=2;
     
    // else if(v[p-i-1]==1||v[p+i-1]==1)
      //counter++;
  }
  if((p-1)-i<0){
    if((p-1)+i<=n&&v[(p-1)+i]==1){counter++;}
  }
  if((p-1)+i>=n)
  {
    if((p-1)-i>=0&&v[(p-1)-i]==1){counter++;}
  }
 }
if(v[p-1]==1){counter++;}
cout<<counter;
}