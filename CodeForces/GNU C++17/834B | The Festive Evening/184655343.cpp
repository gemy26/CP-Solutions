#include<bits/stdc++.h>
using namespace std;
int main(){
 #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout);
#endif
int n,k;
string s;
cin>>n>>k;
cin>>s;
set<char>st;
map<char,int>mp;
 
for (int i = 0; i < n; ++i)
{
 mp[s[i]] = i;
}
for (int i = 0; i < n; ++i)
{
   
  //cnt++;
  st.insert(s[i]);
  int sz=st.size();
  if(sz > k){cout<<"YES"; return 0;}
  if(mp[s[i]] == i){st.erase(s[i]);}
}
cout<<"NO";
}
 