#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
 
 
int main()
{
  int a=0,b=0,c=0;
   int t=3;
   string s;
   while(t--){
cin>>s;
 
   if(s=="A>B"||s=="B<A"||s=="A>C"||s=="C<A")
   a++;
    if(s=="B>A"||s=="B>C"||s=="C<B"||s=="A<B")
      b++;
    if(s=="C>A"||s=="C>B"||s=="A<C"||s=="B<C")
      c++;
}
 
if(a!=0&&b!=0&&c!=0)
{
  cout<<"Impossible";
  return 0;
}
 
else
{
  int maxi=max(a,max(b,c));
  int mini=min(a,min(b,c));
  if(mini==a){cout<<'A';}
  if(mini==b){cout<<'B';}
  if(mini==c){cout<<'C';}
  if(a!=mini&&a!=maxi){cout<<'A';}
  if(b!=mini&&b!=maxi){cout<<'B';}
  if(c!=mini&&c!=maxi){cout<<'C';}
  if(maxi==a){cout<<'A';}
  if(maxi==b){cout<<'B';}
  if(maxi==c){cout<<'C';}
}
 
    return 0;
}