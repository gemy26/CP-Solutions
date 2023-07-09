#include <iostream>
using namespace std;
int f[100005];
int main()
{
    int n,m,c=0,x;
    cin>>n>>m;
    int arr[n],res[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        if(f[arr[i]]==0)
            c++;
        f[arr[i]]=1;
        res[i]=c;
    }
    while(m--)
    {
        cin>>x;
        x--;
        cout<<res[x]<<"\n";
    }
 
}