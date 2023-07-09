#include<bits/stdc++.h>
using namespace std;
 
 
 
int main(){
int n;
cin >>n;
if(n==1){cout<<1; return 0;}
int res=n;
int last =1,remain=n-last;
for (int i = 1; i < n-1; ++i)
{
 res+=(last*(remain-1))+remain;
 last++;
 remain=n-last;
}
cout<<++res;
}