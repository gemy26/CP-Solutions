#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
   //sort(s.begin( ),s.end( ));
int counter=0,flag=0;
int n=s.size();
    for(int i = 0; i < s.size(); i++){
     if(s[i]>=97&&s[i]<=122){counter++; }
     else flag++;
    }
    if (counter>=flag){
      for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);
      }
      cout<<s;
    }
else {
      for(int i=0;i<n;i++){
            s[i]=toupper(s[i]);
      }
      cout<<s;
    }
 
 
    return 0;
}
 
 