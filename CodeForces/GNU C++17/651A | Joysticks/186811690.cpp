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
 
  #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
  int a,b;
  int f,s;
  cin>>a>>b;
  if(a==1&&b==1){cout<<0<<el; return 0;}
  f=min(a,b);
  s=max(a,b);
  int i=0;
  while(f && s){
    s-=2;
    f+=1;
    if(s==1 || (s-2==0&&f>=0))swap(s,f);
    else if(f==1 )swap(s,f);
    i++;
  }
 cout<<i;
 
   
  
}