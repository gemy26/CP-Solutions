#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n; cin>>n;
    deque<int>dq(n);
    for(int i=0;i<n;i++)
        cin>>dq[i];
    
    int p1=0,p2=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(dq.front()>dq.back())
            {
                p1+=dq.front();
                dq.pop_front();
            }
            else
            {
                p1+=dq.back();
                dq.pop_back();
            }
        }
        else
        {
            if(dq.front()>dq.back())
            {
                p2+=dq.front();
                dq.pop_front();
            }
            else
            {
                p2+=dq.back();
                dq.pop_back();
            }
        }
    }
    cout<<p1<<' '<<p2;
    return 0;
}