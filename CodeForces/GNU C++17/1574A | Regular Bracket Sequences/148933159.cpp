#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 scanf("%d",&t);
 while(t--){
  int n;
  scanf("%d",&n);
  string s;
  for(int i=0;i<n;++i) s+='(',s+=')';
  for(int i=0;i<n;++i){
   printf("%s\n",s.c_str());
   for(int j=1;j<2*n;j+=2){
    if(s[j]==')'&&s[j+1]=='('){
     swap(s[j],s[j+1]);
     break; 
    }
   }
   
  }
 }
 return 0;
}