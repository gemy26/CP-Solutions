#include <iostream>
 
using namespace std;
 
int main()
{
    int x,y;
    cin>>x>>y;
    int n,t=1;
    n=max(x,y);
   while(t--){
       if(n==1){cout<<"1/1"; return 0;}
     else if(n==2){cout<<"5/6"; return 0;}
    else if(n==3){cout<<"2/3"; return 0;}
   else  if(n==4){cout<<"1/2"; return 0;}
     else if(n==5){cout<<"1/3"; return 0;}
    else if(n==6){cout<<"1/6"; return  0;}
   }
 
 
 
 
 
    return 0;
}