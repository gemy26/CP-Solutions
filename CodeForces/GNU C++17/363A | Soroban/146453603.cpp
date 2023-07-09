#include <iostream>
#include<string>
using namespace std;
 
int main()
{
      string arr[10]={"O-|-OOOO","O-|O-OOO","O-|OO-OO","O-|OOO-O","O-|OOOO-","-O|-OOOO ","-O|O-OOO",
"-O|OO-OO","-O|OOO-O","-O|OOOO-"};
      string x;
      int num;
      cin>>x;
      int l=x.size();
      for(int i=1;i<=l;i++){
          num=x[l-i]-'0';
          cout<<arr[num]<<endl;
      }
 
 
    return 0;
}