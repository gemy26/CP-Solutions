#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
  int counter=0;
   string x,y;
   cin>>x>>y;
    int n=x.size();
    for(int i=0;i<n;i++){
x[i]=tolower(x[i]);
    }
    for(int i=0;i<n;i++){
y[i]=tolower(y[i]);
    }
   
   
  
   for(int i=0;i<n;i++){
        if(x[i]==y[i]){counter++;}
         else if(x[i]>y[i]){cout<<"1";break;}
        else  if(x[i]<y[i]){cout<<"-1";break;}
        
 
  }
  if(counter==n){cout<<"0";}
   
      return 0;
}