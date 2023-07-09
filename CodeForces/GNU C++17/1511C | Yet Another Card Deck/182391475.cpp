#include <bits/stdc++.h>
#define ll long long
#define el "\n"
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
    int n,k;
    cin>>n>>k;
    deque<int>dq;
    vector<int>res;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        dq.push_back(y);
        ///cin >> dq[i];
    }
 
    while(k--) {
 
        int x;
        cin >> x;
int index ;
 
        for (int j = 0; j < n; ++j) {
            if(x == dq[j]) {
                index = j;
                dq.erase(dq.begin()+index);
 
                cout<<index+1<<' ';
                break;
            }
        }
 
        dq.push_front(x);
 
    }
    for(auto i  : res)
 
        cout<<i<<' ';
 
}