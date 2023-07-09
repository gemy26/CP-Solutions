#include<bits/stdc++.h>
using namespace std;
int main(){
 int n=5;
 int a[n];
   vector<int> v;
   int sum = 0;
   int frq[101]={0};
   multiset<int>st;
 for (int i = 0; i < n; ++i)
 {
  cin>>a[i];
  st.insert(a[i]);
  sum+=a[i];
 }
 v.push_back(sum);
 for (int i = 0; i < 5; ++i)
 {
  if(st.count(a[i]) == 2 || st.count(a[i]) == 3)
  {
   int x = sum -(st.count(a[i])*a[i]);
   v.push_back(x);
  }
  else if(st.count(a[i]) == 4){
   int x =sum - (( st.count(a[i]) - 1)*a[i]);
    v.push_back(x);
  }
  else
  {
   int x = sum - (st.count(a[i]) - 2)*a[i];
   v.push_back(x);
  }
 }
 
 
  
 
 
 sort(v.begin(),v.end());
 cout<<v[0];
 
}