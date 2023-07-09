#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
  int a,b,c,d,e,f;
  int sum=0,val_1,val_2,val_3,val_4;
  cin>>a>>b>>c>>d>>e>>f;
  if(f>=e){
      val_1=f;
if(c>d && b>d){
    cout<<d*f;
    return 0;
}
else {
   val_2=min(b,c);
   sum=val_2*f;
   d=d-val_2;
val_3=min(a,d);
 
    sum+=(val_3*e);
 
 
 
 
    }
 
cout<<sum;
 
  }
  else if(e>f){
   val_1=e;
   val_2=min(a,d);
   sum=val_2*e;
   d=(d-val_2);
   val_3=min(min(b,c),d);
   sum+=(val_3*f);
cout<<sum;
 
 
  }
 
 
 
 
 
 
 
 
    return 0;
}