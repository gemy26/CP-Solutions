#include <iostream>
 
using namespace std;
 
int main()
{
   int n,sum=0,sub=0;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   for(int i=0;i<n;i++){
      sum+=arr[i];
   }
   for(int i=0;i<n;i++){
      sub-=abs(arr[i]);
   }
 
   cout<<max(sum,abs(sub));
 
 
    return 0;
}