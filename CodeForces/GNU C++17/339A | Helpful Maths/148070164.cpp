#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int counter=0;
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
 
 
    for(int i=0; i<s.size(); i++)
    {
 
 
        if(s[i]>='1'&&s[i]<='9')
        {
          cout<<s[i];
          if(s[i+1]>='1'&&s[i+1]<='9'){
            cout<<"+";
          }
        }
 
 
 
 
    }
 
 
 
 
 
    return 0;
}