#include<bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
long long modularbinaryexponential(long long x, int n){
    long long res = 1;
    while(n > 0){
        if(n % 2 == 1)
            res = ((res)*(x));
        x = ((x)*(x));
        n /= 2;
    }
    return res;
}
 
 
int main(){
fast_cin();
int n,m;
cin >> n >> m;
if(n >= 64){cout << m; return 0;}
cout << m % modularbinaryexponential(2,n);
 
 
 
}