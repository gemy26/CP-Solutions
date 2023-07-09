#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
#include<sstream>
 
 
 
 
using namespace std;
 
int main()
{
  
 
int t;
int n,m,r,c;
cin>>t;
 
for(int i=1;i<=t;i++){
 
 cin>>n>>m>>r>>c;
 
 cout<<max(abs(r-1),abs(n-r))+max(abs(c-1),abs(m-c))<<endl;
}
   
return 0;
}
 