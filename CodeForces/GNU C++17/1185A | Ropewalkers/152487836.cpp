#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int arr[3],d,res=0;
    for(int i=0;i<3;i++)
    {
 
        cin>>arr[i];
    }
 
    cin>>d;
 
    sort(arr,arr+3);
 
    if(arr[1]-arr[0]<d)
        res+=d-(arr[1]-arr[0]);
    if(arr[2]-arr[1]<d)
        res+=d-(arr[2]-arr[1]);
    cout<<res;
}
 
 
 