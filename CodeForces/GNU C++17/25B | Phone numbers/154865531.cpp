#include <bits/stdc++.h>
#include <vector>
#include<iterator>
#include <algorithm>
#include <sstream>
#define  ll long long
const int AK=5e5+5;
using namespace std;
bool isprime(int x)
{
  for (int i = 2; i <= x / i; i++)
    if (x % i == 0)
      return false;
  return true;
}
int main()
{
  int n;cin>>n;
  string s;
  cin>>s;
  if(n%2!=0)
  {
   
    
        int counter=0;
        for(int i=0;i<n;i++)
        {
           if(i<=2)
           {
                      cout<<s[i];
                      ++counter;
                      if(counter==3&&i!=n-1)
                      {
                        cout<<'-';
                        counter=0;
                      }
                    }
 
                    else
                     {
        
          cout<<s[i];
          if(i%2==0&&i!=n-1)
          {
            cout<<'-';
          }
                    }
 
        }
      
      
      }
      else
      {
        for(int i=0;i<n;i++)
        {
           cout<<s[i];
           if(i==0)continue;
          if(i%2!=0&&i!=n-1)
          {
            cout<<'-';
          }
        }
      }
      
 
 
 
 
}