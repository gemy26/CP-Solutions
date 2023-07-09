#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long a,b;
    cin >> a>>b;
    b = pow(10,b);
    cout << (a*b)/__gcd(a,b);
}
 