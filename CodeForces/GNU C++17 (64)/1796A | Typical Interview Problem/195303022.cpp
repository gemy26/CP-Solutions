#include<bits/stdc++.h>
using namespace std;
 
int main(){
   
   string a= "";
    for (int i = 1; i <= 10000 ; ++i) {
 
         if(i%3==0)
            a+="F";
         if (i%5==0)
            a+="B";
    }
    int t;
    cin >> t;
    while (t--){
        int s;
        cin >> s;
        string f;
        cin >> f;
        if(a.find(f)!=-1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
 
}
 