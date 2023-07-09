#include<bits/stdc++.h>
using namespace std;
 
 
 
int main(){
    int t;
    cin >>t;
    while(t--) {
        long long cnt = 1, c = 0, n, k, i = 1;
        cin >> n >> k;
        if (k == 1 && n > 1) {
            cout << n - 1 << endl;
            continue;
        }
        if (k == 1 && n == 1) {
            cout << 0 << endl;
            continue;
        }
//        if (n == 2) {
//            cout << 1 << endl;
//            continue;
//        }
 
        while( cnt < k){
           cnt *= 2;
           c++;
        }
        //cout<< c;
        //n -= cnt;
        if (n > cnt){
           c += (n-cnt+k-1)/k;
        }
        //c += ((n + k)/k);
        cout<< c << endl;
    }
 
}