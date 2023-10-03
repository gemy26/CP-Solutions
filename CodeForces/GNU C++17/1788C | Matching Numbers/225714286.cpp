#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+2;
 
 
int main(){
    int t;
    cin >> t;
    while(t--){
int n;
    cin >> n;
    if(n%2 == 0){
        cout<<"NO\n";
         continue;
    }
    else{
        cout<<"YES\n";
        int cnt = 2*n;
        for (size_t i = 1; i <= n; i+=2 )
        {
            cout<<i<<" "<<cnt<<endl;
            cnt--;
        }
        for (size_t i = 2; i <= n; i+=2)
        {
            cout<<i<<" "<<cnt<<endl;
            cnt--;
        }
        
 
        
    }
    }
    
    
}
//g++ hello.cpp
// ./a.out