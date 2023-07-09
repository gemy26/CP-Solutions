#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return a.second<b.second;}
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
int main(){
    ios::sync_with_stdio(false);
   int n;
   cin>>n;
  vector<int>v(n);
  for(auto &i : v)
      cin>>i;
    multiset<int>s1;
    multiset<int>s2;
    multiset<int>s3;
  int sum=1;
    for (int i = 0; i < n; ++i) {
       /// sum*=v[i];
        if(v[i]>0) s2.insert(v[i]);
        else if(v[i]<0) s1.insert(v[i]);
        else
            s3.insert(v[i]);
 
    }
//   if(s1.size()==1&&s2.size()==1&s3.size()==1){
//       cout<<s2.size()<<' ';for(auto i : s1)cout<<i<<' ';cout<<el;
//       cout<<s1.size()<<' ';for(auto i : s2)cout<<i<<' ';cout<<el;
//       cout<<s3.size()<<' ';for(auto i : s3)cout<<i<<' ';cout<<el;
//   }
    if(s2.empty()){
       auto i = s1.begin();
       s2.insert(*i);
       s1.erase(i);
       i = s1.begin();
       s2.insert(*i);
       s1.erase(i);
//       cout<<s1.size()<<' ';for(auto i : s1)cout<<i<<' ';cout<<el;
//       cout<<s2.size()<<' ';for(auto i : s2)cout<<i<<' ';cout<<el;
//       cout<<s3.size()<<' ';for(auto i : s3)cout<<i<<' ';cout<<el;
   }
    if(s1.size()%2==0){
       auto i = s1.begin();
       s3.insert(*i);
       s1.erase(i);
 
//       cout<<s1.size()<<' ';for(auto i : s1)cout<<i<<' ';cout<<el;
//       cout<<s2.size()<<' ';for(auto i : s2)cout<<i<<' ';cout<<el;
//       cout<<s3.size()<<' ';for(auto i : s3)cout<<i<<' ';cout<<el;
 
   }
 
 
       cout<<s1.size()<<' ';for(auto i : s1)cout<<i<<' ';cout<<el;
       cout<<s2.size()<<' ';for(auto i : s2)cout<<i<<' ';cout<<el;
       cout<<s3.size()<<' ';for(auto i : s3)cout<<i<<' ';cout<<el;
 
 
}
 