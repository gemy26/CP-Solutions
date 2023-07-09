#include<bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
const int N = 1e6 + 10;
int numfactors[N];
int main() {
    fast_cin();
    int a,b,c;
    cin >>a>>b>>c;
    long long s=0;
    for (int i = 1; i <= 1e6 ; ++i) {
        for (int j = i; j <= 1e6 ; j+=i) {
            numfactors[j]++;
        }
    }
    for (int i = 1; i <= a ; ++i) {
        for (int j = 1; j <= b ; ++j) {
            for (int k = 1; k <= c ; ++k) {
//                cout << factors(a*b*c)<<' ';
s+= numfactors[i*j*k];
            }
        }
    }
cout << s;
}