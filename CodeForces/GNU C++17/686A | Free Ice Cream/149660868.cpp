#include<bits/stdc++.h>
 
#define FAST ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
using namespace std;
 
 
 
int main()
{
 
    FAST
 
    long long n;
    long long x;
    long long sum;
    int q=0;
    cin>>n;
    cin>>x;
    sum=x;
    char ch;
    int y;
    while(n--){
 
      cin>>ch;
      cin>>y;
      if(ch=='+'){
         sum+=y;
      }
 
 
   else if(sum>=y){
      sum-=y;
 
}
 
else {
    q++;
}
 
    }
cout<<sum<<" "<<q;
    return 0;
}