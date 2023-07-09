#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
 string s1,s2;
 getline(cin,s1);
 getline(cin,s2);
 map<char,int>mp1;
 map<char,int>mp2;
 for (int i = 0; i < s1.size(); ++i)
 {
  if(s1[i] != ' ')
    mp1[s1[i]]++;
 }
 for (int i = 0; i < s2.size(); ++i)
 {
  if(s2[i] != ' ')
    mp2[s2[i]]++;
 }
 
 for (int i = 0; i < s2.size(); ++i)
 {
  if(  mp2[s2[i]] > mp1[s2[i]]){
   cout<<"NO"<<endl;
   return 0;
  }
  
  
 }
cout<<"YES";
 
} 