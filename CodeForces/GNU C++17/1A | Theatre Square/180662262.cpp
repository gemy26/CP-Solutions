#include <bits/stdc++.h>
 
using namespace std;
 
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
 freopen("input.txt", "r", stdin);
 
 freopen("output.txt", "w", stdout);
 
#endif
 
  long long n,m,a;
     cin>>n>>m>>a;
      long long n1=(n/a),n2=m/a;
     if(n%a!=0) n1++;
     if(m%a!=0) n2++;
     cout<<n1*n2;
}