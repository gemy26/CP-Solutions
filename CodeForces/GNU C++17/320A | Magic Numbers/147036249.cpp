#include<iostream>
//#include<bits/stdc++>
#include<string>
using namespace std;
int main( ){
 
   string s;
   cin>>s;
   int n,counter=0;
   n=s.size();
   if(s[0]=='4'){
        cout<<"NO";
       return 0;
     }
     
   for(int i=0;i<n;i++){
     if(s[i]!='1'&&s[i]!='4'){
       cout<<"NO";
       return 0;
     }
     
 if(s[i]=='4'&&s[i+1]=='4'&&s[i+2]=='4'){
        counter++;    
     }   
     
   }
 
   if(counter>=1){
     cout<<"NO";
   }
     else {
     cout<<"YES";}
        
     
     
   
 
   
    return 0;
}