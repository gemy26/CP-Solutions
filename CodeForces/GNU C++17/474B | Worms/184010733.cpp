#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;
int main(){
 int n,q;
 cin>>n;
 vector<long long >v(n);
 for (auto &it : v) cin >> it;
  for (int i = 1; i < n; ++i)
  {
   v[i] += v[i-1];
  }
    cin >> q;
    while(q--){
     int x;
      cin>>x;
         cout<<lower_bound(v.begin(),v.end(),x)-v.begin()+1<<endl;
 
    } 
 
}