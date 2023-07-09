#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
int main(){
 int n,m;
 cin >> n >> m;
 
int a[n];
for (int i = 0; i < n; ++i)
{
 cin >> a[i];
}
int l=0,r=0,sum=0,res=0;
while(l<n){
 while(r<n && sum+a[r]<=m){
     sum+=a[r];
     r++;
 }
 res=max(res,r-l);
 sum-=a[l];
 l++;
}
cout<<res;
 
}
 
 