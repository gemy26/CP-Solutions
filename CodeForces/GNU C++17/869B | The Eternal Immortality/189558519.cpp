#include<bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
 
 
int main(){
fast_cin();
    long long a,b,c,r=1;
    cin >> a >>b;
    c = b - a;
    if(c >= 10){cout << 0 ; return 0;}
 
    for (long long i = a+1; i <= b ; ++i) {
         long long l = i % 10;
         r*=l;
         r%=10;
    }
    cout << r;
 
 
}