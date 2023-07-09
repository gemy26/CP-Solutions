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
 
int main()
{
    int n; cin>>n;
    vector<int>a(n);
     for (int i = 0; i < n; ++i)
     {
         cin>>a[i];
     }
     int q;
      cin>>q;
      sort(a.begin(),a.end());
      while(q--) {
          int x;
          cin >> x;
          int f = 0;
 
          if (x < a[0]) {
              cout << 0 << endl;
              continue;
          }
          if (x >= a[n-1]){cout<<n<<endl; continue;}
          else {
              auto it = upper_bound(a.begin(), a.end(), x);
              cout<<it-a.begin()<<endl;
//              int r = n-1, l = 0;
//              while (r >= l) {
//                  int m = (r + l) / 2;
//                  if (a[m] == *it) { break; }
//                  else if (a[m] > *it) { r = m - 1; }
//                  else { l = m + 1; }
//              }
//              cout << l<<r << endl;
 
          }
      }
      /*
       2
2
3
4
0
4
3
1
2
2
       * */
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 