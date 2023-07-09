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
    vector<int>v(n);
    vector<int>even;
    vector<int>odd;
    int cnt=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>v[i];
        if(v[i]%2==1){
            
            odd.push_back(i+1);
        }
        else{
            even.push_back(i+1);
            cnt++;
        }
    }
    if(cnt==n){cout<<"NO\n";}
    else{
        if(even.size()==0){cout<<"YES\n";cout<<odd[0]<<' '<<odd[1]<<' '<<odd[2]<<el; continue;}
        if(odd.size()-even.size()==1 && odd.size()<3 ){cout<<"NO\n";continue;}
        if(n-cnt>=3){cout<<"YES\n";for (int i = 0; i < 3; ++i)
        {
           cout<<odd[i]<<' ';
        }
        cout<<el;
        continue;
    }
       cout<<"YES\n"<<odd[0]<<' '<<even[0]<<' '<<even[1]<<el;
    }
   
}
}
 
 