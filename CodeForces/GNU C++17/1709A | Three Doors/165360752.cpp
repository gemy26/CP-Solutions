#include <bits/stdc++.h>
#include<vector>
#define ll long long
#define el "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
using namespace std;
//------is prime---------//
bool isprime(int x)
{
    for (int i = 2; i <= x / i; i++)
        if (x % i == 0)
            return false;
    return true;
}
//----------binary search--------//
int binarysearch(int a[],int key,int low,int high)
{
    int middle=(low+high)/2;
    if(a[middle]==key) return middle;
    if(key>middle)return binarysearch(a,key,middle+1,high);
    else
        return binarysearch(a,key,low ,middle-1);
}
//--------GCD---------------//
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
 
//-----------------------//
const int AK=5e5+5;
const long long VVB=5e9+5;
//----------------------//
 
int main()
{
    fast_cin();
    int n; cin>>n;
    deque<int>dq(3);
    while(n--) {
        int cur;
        int x;
        cin >> x;
        for (int i = 0; i < 3; ++i) {
 
           cur = x;
            cin >> dq[i];
        }
        if(dq[cur-1]!=0){cur=dq[cur-1];}
        else{cout<<"NO"<<el;
            continue;}
        if(dq[cur-1]!=0){cur=dq[cur-1];}
        else{cout<<"NO"<<el;
            continue;}
        cout<<"YES"<<el;
    }
 
}
 
 
 