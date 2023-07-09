#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include<vector>
#include<cmath>
#include<sstream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        int a,b,c;
          cin>>a>>b>>c;
int mini=abs(a-b)+abs(a-c)+abs(b-c);
 
        for(int i=-1; i<=1; i++)
        {
            for(int j=-1; j<=1; j++)
            {
                for(int f=-1; f<=1; f++)
                {
                  int aa=a+i;
                  int bb=b+j;
                  int cc=c+f;
 
                  int res=abs(aa-bb)+abs(aa-cc)+abs(bb-cc);
                  mini=min(mini,res);
                }
            }
        }
        cout<<mini<<endl;
    }
 
    return 0;
}