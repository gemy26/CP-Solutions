#include <iostream>
 
using namespace std;
 
int main()
{
int i=1;
    int n;
    int x,y,z;
    int counter=0;
    int t=1;
    int result=0;
    cin>>n;
 
    while(t<=n)
    {
        cin>>x>>y>>z;
       result=x+y+z;
       if(result>=2)
        counter++;
 
t++;
    }
 
cout<<counter;
    return 0;
}