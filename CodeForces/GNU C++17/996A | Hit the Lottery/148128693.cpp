#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
 
 
using namespace std;
 
int main()
{
 
long long x;
cin>>x;
int counter=0;
while (true){
if(x-100>=0){
   x-=100; counter++; continue;
}
if(x-20>=0){
   x-=20; counter++; continue;
}
if(x-10>=0){
   x-=10; counter++; continue;
}
if(x-5>=0){
   x-=5; counter++; continue;
}
if(x-1>=0){
   x-=1; counter++; continue;
}
if(x==0){break;}
}
 
cout <<counter;
 
return 0;
}