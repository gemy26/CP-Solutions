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
// "if you can beat them,join them" , author : Jim Henson
// "If You Can Dream It, You Can Do It" ,  author : Walt Disney
bool check(int a[],int n){
    set<int>st;
    for (int i = 0; i < n ; ++i) {
        st.insert(a[i]);
        if(a[i]<=0 || a[i]> n)return false;
    }
 
    return true;
}
int main(){
int t;
cin>>t;
while(t--){
    set<int>st;
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
 
    }
    for (int i = 0; i < n ; ++i) {
        int x = a[i];
        while(a[i] > n || st.count(a[i])) a[i]/=2;
       if(a[i]<=0 || st.count(a[i]) || a[i]>n){cout<<"NO\n"; goto here;}
       else
           st.insert(a[i]);
 
    }
    cout<<"YES\n";
here:
    ;
}
}
 