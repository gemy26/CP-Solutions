#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
   int a,b,i,counter=0;
   cin>>a>>b;
    
       
    while(b>=a){
 
      a*=3;  
       b*=2;
      counter++;
        
    }
    cout<<counter;
    return 0;
}
 
 