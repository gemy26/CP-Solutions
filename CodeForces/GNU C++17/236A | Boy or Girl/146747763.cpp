#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    sort(s.begin(),s.end());
int counter=0;
int n=s.size();
    for(int i = 0; i < s.size(); i++){
     if(s[i]!=s[i+1]){counter++;}
    }
    if (counter%2==0){cout<<"CHAT WITH HER!";}
    else cout<<"IGNORE HIM!";
 
    return 0;
}
 
 