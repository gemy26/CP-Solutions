#include<bits/stdc++.h>
 
#define FAST ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
using namespace std;
 
 
 
int main()
{
 
    FAST
 
  int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0){
        for(int i=n;i>0;i--){
         cout<<i<<" ";
        }
        }
        else {
         for(int i=n;i>(n/2)+1;i--){
            cout<<i<<" ";
         }
         for(int i=1;i<=(n/2)+1;i++)
         {
 
            cout<<i<<" ";
         }
        }
cout<<endl;
    }
    return 0;
}