#include<iostream>
#include<string>
using namespace std;
int main()
{
   string x;   
   int n;
  
   cin>>n;
   for(int i=0;i<n;i++){
        cin>>x;
 
 if(x.size()<=10)
   {
       cout<<x<<endl;
   }
   else if(x.size()>10)
   {
     cout<<x[0]<<x.size()-2<<x[x.size()-1]<<endl;
 
 
   }
 
   }
  
return 0;
 
 
}