#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  
  int flag=0;
  int n;
  int counter=0;
  int x;
  for(int i=0;i<s.size();i++)
  {
    n++;
    if(s[i]=='a'){
      counter++;
    }
    else {
      x++;
    }
  }
 
  if(counter>(s.size()/2)){
    cout<<s.size();
    return 0;
  }
  
  else
  {
 
 while (true)
        {
 
            x--;
            if (x < counter )
            {
              cout<<counter+x;
                return 0 ;
 
            }
}
 
 
}
 
 
  return 0;
}
 
 
 