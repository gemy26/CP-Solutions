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
 
    int flag=0;
    for(int i=0; i<s.size(); i++)
    {
 
 
        if(s[i]>='a'&&s[i]<='z')
        {
           if(s[i]!=s[i+1]){counter++;}
 
        }
 
    }
 
 
 
 
    cout<<counter;
 
    return 0;
}