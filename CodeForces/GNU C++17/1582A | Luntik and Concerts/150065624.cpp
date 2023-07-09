#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
 
    while(t--)
    {
        long long  a,b,c;
        cin>>a>>b>>c;
        a*=1;
        b*=2;
        c*=3;
        long long  sum=a+b+c;
        cout<<sum%2<<endl;
 
 
    }
   
    return 0;
}