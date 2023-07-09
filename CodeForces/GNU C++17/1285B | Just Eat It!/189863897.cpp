#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   int t;
    cin >> t;
    while(t--){
        int n;
        long long one=0 ,two=0;
        cin >> n;
         int a[n];
//        set<bool>checkPos;
//        set<int>cup;
        for (int i = 0; i < n ; ++i) {
            cin >> a[i];
//            cin >> a[i];if(a[i]>=0 )checkPos.insert(true); else checkPos.insert(false);
//            cup.insert(a[i]);
        }
//        auto first = checkPos.begin();
//        if(checkPos.size() == 1 && *first == true){cout<<"YES\n";goto here;}
 
            for (int i = 0; i < n ; ++i) {
                two +=a[i];
                if(two <= 0){cout<<"NO\n"; goto here;}
            }
            two = 0;
            for (int i = n-1; i >= 0 ; --i) {
                two +=a[i];
                if(two <= 0){cout<<"NO\n"; goto here;}
            }
 
        cout<<"YES\n";
        here:
        ;
 
 
    }
}
 