#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int cnt=0;
  cin>>n;
  int x=0;
  int arr[n];
  for (int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
int sum=0;
for(int i=0;i<n;i++)
{
  sum+=arr[i];
}
x=n/2;
int val;
val=sum/x;
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
if(arr[i]+arr[j]==val&&i!=j)
{
  cout<<i+1<<" "<<j+1<<endl;
  arr[i]=0; arr[j]=0;
  }
 
}
}
  return 0;
}
 
 
 