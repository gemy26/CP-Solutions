#include<bits/stdc++.h>
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
//-----------------------//
const int AK=5e5+5;
const long long VVB=5e9+5;
//-----------------------//
bool sortbysecdesc(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
//----------------------//
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}
 
int main(){
 fast_cin();
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
   cin>>a[i];
  }
  string s;
  cin>>s;
  for (int i = 0; i < n; ++i)
  {
   char ch =s[i];
   for (int j = i+1; j < n ; ++j)
   {
    if(a[j] == a[i] && s[j] != ch)
    {
     cout<<"NO"<<el;
     goto here;
    }
   }
  
  }
  cout<<"YES"<<el;
  here:
  continue;
 }
 
 
} 