#include<bits/stdc++.h>
 
#define FAST ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
using namespace std;
 
 
 
int main()
{
 
    FAST
 
  int n;
  cin>>n;
  int k;
  cin>>k;
  char ch;
 vector<char>str;
 while(n!=0){
 for(int i=0;i<k;i++)
 {
    ch='a'+i;
    str.push_back(ch);
    n--;
    if(n==0){break;}
 }
 
 
 }
 for(int i=0;i<str.size( );i++){
   cout<<str[i];
 }
    return 0;
}