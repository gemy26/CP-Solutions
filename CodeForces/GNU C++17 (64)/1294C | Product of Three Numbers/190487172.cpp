#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v;
    set<int>st;
    //int i=2;
    for (int i = 2; i*i <= n &&v.size()!=2;  i++) 
    { 
        if(n%i==0){n/=i;v.push_back(i);}
       
    } 
   
     
   
   
    if(v.size()!=2||n==1||n==v[0]||n==v[1])
        cout<<"NO\n";
    else{
        cout<<"YES\n";
        for(auto i : v)
    cout<<i<<' ';
cout<<n;
cout<<el;
    }
   
    
    
 
}
}
 
 