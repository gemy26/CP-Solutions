#include <bits/stdc++.h>
using namespace std;
 
bool ok ;
int n;
vector<int> v;
void check(int x){
    vector<int>a;
    for (int i = 0; i < n ; ++i) {
        if(v[i]!=x)
            a.push_back(v[i]);
    }
    int l=0,r=a.size()-1;
    while (r>l){
        if(a[r]!=a[l])
            return;
        l++,r--;
    }
    ok = true;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        ok = true;
        // bool f = false;
 
        cin >> n;
        v.resize(n);
 
        for (int i = 0; i < n; i++)
            cin >> v[i];
        //set<int> st;
        int l = 0, r = v.size()-1;
        while (r > l) {
            if (v[l] != v[r]) {
                ok = false;
                check(v[l]);
                check(v[r]);
                break;
 
            }
 
            r--;
            l++;
 
 
        }
        if (ok) { cout << "YES\n"; }
        else
            cout << "NO\n";
 
    }
}
 
 
 
 
 
 