#include <bits/stdc++.h>
#include<vector>
#define ll long long
#define el "\n"
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
int main() {
    vector<pair<int, int>> mp;
    int t;
    cin >> t;
    int cnt = 1;
    vector<int>res;
    for (int i = 0; i < t; ++i) {
        int h, m; //cin>>mp[0].first>>mp[i].second;
        cin >> h >> m;
        mp.push_back({h, m});
    }
    sort(mp.begin(), mp.end());
    for (int i = 1; i < t; ++i) {
        if (mp[i].first == mp[i - 1].first && mp[i].second == mp[i - 1].second)
            cnt++;
        else{
            res.push_back(cnt);
            cnt=1;
        }
    }
    res.push_back(cnt);
    int x;
    if(res.size()!=0){
 x=*max_element(res.begin(),res.end());
    cout << x;}
    else
        cout<<cnt;
 
 
}
 
 
 
 
 