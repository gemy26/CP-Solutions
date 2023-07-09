#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
 
int main(){
 ios::sync_with_stdio(false);
 int n;
 cin>>n;
 string s;
 cin>>s;
 multiset<char>st;
 int cnt=0;
 if(n>26){
     cout<<-1;return 0;}
 for (int i = 0; i < n; ++i)
 {
     st.insert(s[i]);
     if(st.count(s[i])>1)
        cnt++;
 }
 cout<<cnt;
 
}
 
 