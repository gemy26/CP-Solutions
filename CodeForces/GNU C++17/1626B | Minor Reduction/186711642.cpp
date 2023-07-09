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
int main(){
char c[]={'0','1','2','3','4','5','6','7','8','9'};
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string e;
        string mm;
        //int maxi=0;
        int n = s.size();
        bool f= false;
        for(int i = n-1;i>0;i--){
            int sum = s[i]-'0'+s[i-1]-'0';
            if(sum > 9){
                s[i]=c[sum%10];
                s[i-1]='1';
                cout<<s<<endl;
                f=true;
                break;
            }
        }
        if(!f){s[1]+=s[0]-'0';s.erase(0,1);cout<<s<<endl;continue;}
 
 
 
    }
}
 