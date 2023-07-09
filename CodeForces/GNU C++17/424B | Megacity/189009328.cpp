#include<bits/stdc++.h>
using namespace std;
 
 
 
int main() {
    int n, k;
 
 
    cin >> n >> k;
    vector<pair<double, int>> vp;
    for (int i = 0; i < n; ++i) {
        int x, y, p;
        cin >> x >> y >> p;
        vp.push_back({(sqrt((x * x) + (y * y))), p});
    }
    sort(vp.begin(), vp.end());
 
 
    for (int i = 0; i < n; ++i) {
        k += vp[i].second;
        if (k >= 1e6) {
            //cout << 0;
            cout << setprecision(10) << vp[i].first << endl;
            return 0;
        }
    }
    cout << -1;
}