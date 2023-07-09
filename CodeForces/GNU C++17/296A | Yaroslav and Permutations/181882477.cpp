#include <bits/stdc++.h>
#define ll long long
#define el "\n"
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
int main()
{
    fast_cin();
    int count;
    cin>>count;
    int a[count];
    int frq[1005]={0};
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
        frq[a[i]]++;
    }
    bool flag1 = false;
    bool flag2 = false;
    for (int i = 1; i < count; i++)
    {
        if(frq[a[i]] > (count/2)+1){flag1=true;}
        if (frq[a[i]] > (count / 2))
        {
            flag2 = true;
        }
    }
    if(flag1 && count%2!=0){cout<<"NO"<<el; return 0;}
    if (flag2 && count % 2 == 0)
    {
        cout << "NO" << el;
        return 0;
    }
 
    else
    cout<<"YES"<<el;
    
    
}