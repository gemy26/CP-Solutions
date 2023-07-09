#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define us_int unsigned int
#define all(x) x.begin(), x.end()
#include <fstream>
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
 
using namespace std;
//------is prime---------//
int isPrime(int k)
{
 
    if (k <= 1)
        return 0;
    if (k == 2 || k == 3)
        return 1;
    if (k % 2 == 0 || k % 3 == 0)
        return 0;
 
    for (int i = 5; i * i <= k; i = i + 6)
        if (k % i == 0 || k % (i + 2) == 0)
            return 0;
 
    return 1;
}
 
bool palindrome(string s)
{
    string p = s;
    reverse(p.begin(), p.end());
    if (s == p)
        return true;
    else
        return false;
}
//-----------------------//
const int AK = 5e5 + 5;
const long long VVB = 5e9 + 5;
//----------------------//
bool sortbysecdesc(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second > b.second;
}
int mod = 1e9 + 7;
 
bool check(int a[],int n){
    int sum = a[0];
    int prev=a[0];
    for(int i=1;i<n;i++){
        if(a[i]==sum )return false;
        else
            sum+=a[i];
        prev = a[i];
    }
    return true;
}
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        if(check(a,n)){cout<<"YES"<<el;for(int i=0;i<n;i++) cout<<a[i]<<' ';  cout<<el; goto here;}
        else{
 
           swap(a[0],a[n-1]);
           
        }
        if(check(a,n)){cout<<"YES"<<el;for(int i=0;i<n;i++) cout<<a[i]<<' ';  cout<<el; goto here;}
        else{cout<<"NO"<<el;}
here:
        ;
    }
 
 
}
 