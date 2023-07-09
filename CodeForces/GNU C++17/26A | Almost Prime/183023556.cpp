//  B. Letters Rearranging
// 11/27/2022
 
#include <bits/stdc++.h>
 
#define ll long long
#define el "\n"
#define all(x) x.begin(), x.end()
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define Sort(x) sort(all(x))
#define Reverse(x) reverse(all(x))
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
void printPrimeFactors(int n,set<int>&st)
{
    while (n % 2 == 0)
    {
        //cout << "2\t";
        st.insert(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            //cout << i << "\t";
            st.insert(i);
            n = n / i;
        }
    }
    if (n > 2){
       //cout << n << "\t";
        st.insert(n);
    }
}
int main()
{
    fast_cin();
    int n;
    cin>>n;
    int cnt=0;
   for(int i=1;i<=n;i++){
    set<int>st;
    printPrimeFactors(i,st);
    //cout<<el;
    if(st.size() == 2)
    cnt++;
   }
   cout<<cnt; 
}