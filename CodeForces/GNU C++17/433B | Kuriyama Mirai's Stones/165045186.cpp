 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
 
    int n,q;
    cin>>n;
    ll a[n],b[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=1 ; i<n ; i++)
    {
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }
    cin>>q;
    int x,y,z;
    while(q--)
    {
        cin>>x>>y>>z;
        if(x==1)
        {
            if(y==1)
                cout<<a[z-1]<<endl;
            else
                cout<<a[z-1]-a[y-2]<<endl;
        }
        else
        {
            if(y==1)
                cout<<b[z-1]<<endl;
            else
                cout<<b[z-1]-b[y-2]<<endl;
        }
    }
}