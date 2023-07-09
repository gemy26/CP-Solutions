#include<bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
 
 
int main(){
fast_cin();
long long l1,r1,l2,r2,k;
cin >> l1 >> r1 >> l2 >> r2 >> k;
    long long l =max(l1,l2)  ;long long r = min(r1,r2);
    long long res = (r - l)+1;
   if(k >= l && k<= r){
       res -= 1;
   }
   cout << max(0LL,res);
 
}