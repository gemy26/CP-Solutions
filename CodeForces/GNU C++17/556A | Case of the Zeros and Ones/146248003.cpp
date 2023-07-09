#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
   string x; int j;
   cin>>j>>x;
   long long result=0;
 
 
   if(x[0]=='0')
   {
       for(int i=1;i<j;i++)
         {
            if(x[i]=='1'){
                  result++;
            }
         }
   }
            else if(x[0]=='1')
            {
               for(int i=1;i<j;i++){
                  if(x[i]=='0'){
                     result++;
                  }
               }
            }
 
 
   cout<<abs((j-(result*2)));
    return 0;
}
 
 