// #include<bits/stdc++.h>
// #include <functional>
// #include <algorithm>
// #include <iostream>
// #include <utility>
// #include <sstream>
// #include <cstdlib>
// #include <cstring>
// #include <cstdio>
// #include <cctype>
// #include <cmath>
// #include <string>
// #include <deque>
// #include <list>
// #include <numeric>
// #include <queue>
// #include <stack>
// #include <vector>
// #include <map>
// #include <set>
// #define  ll long long
// #define r return 0
// #define yes cout<<"YES";
// #define no cout<<"NO";
// #define el cout<<"\n";
// const int AK=5e5+5;
// const long long VVB=5e9+5; 
// using namespace std;
// bool isprime(int x)
// {
//   for (int i = 2; i <= x / i; i++)
//     if (x % i == 0)
//       return false;
//   return true;
// }
// int gcd(int a, int b)
// {
//     if (a == 0)
//        return b;
//     if (b == 0)
//        return a;
//     if (a == b)
//         return a;
//     if (a > b)
//     return gcd(a-b, b);
//     return gcd(a, b-a);
// }
 
// int main()
// {
 
 
 
// string s="1212";
// cout<<s[1]+s[0];
// cout<<s[2]+s[3];
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
// }
 
 
  
 #include <iostream>
#include <algorithm>
#include <cmath>
 
 
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], x=n;
 
        for(int i=0; i<n; i++){
            arr[i]=i+x;
            x-=2;
        }
 
        int t1=n-1, t2=n-2;
 
        for(int i=0; i<n; i++){
            for(int l=0; l<n; l++){
                cout << arr[l] << " ";
            }
            cout << endl;
            swap(arr[t1], arr[t2]);
            t1--, t2--;
        }
    }
}
  
 
 
 