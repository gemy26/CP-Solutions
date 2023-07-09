#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
 
int main()
{
   int t;
   cin>>t;
   string s1;
   string s2;
   while(t--)
   {
       int counter=0;
       int n;
       cin>>n;
       
       cin>>s1;
      
       cin>>s2;
       for(int i=0;i<n;i++)
       {
           if(s1[i]=='1'&&s2[i]=='1'){
               counter++;
               cout<<"NO"<<endl;
               break;
           }
       }
      
       if(counter==0)
       {
           cout<<"YES"<<endl;
       }
      
           
       
   }
   
    return 0;
}