#include <iostream>
#include<bits/stdc++.h>
#include <map>
#include<vector>
using namespace std;
int main(void) {
 
    int n;
    cin>>n;
    int q;
    cin>>q;
    deque<long long>a(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
 
    // 5 5 3 2 1
    //prefix
    // 5 10 13 15 16
 
    for (int i = 1; i < n ; ++i) {
        a[i] += a[i-1];
    }
 
    while(q--)
    {
 
        int x,y; cin>>x>>y;
        long long  res = 0;
        deque<int>dq;
        if(x == y  ){cout<<a[x-1]<<endl; continue;}
        res = a[x-1] - a[x-y-1];
        cout<<res<<endl;
    }
}
// 0 1  2  3  4
// 5 10 13 15 16