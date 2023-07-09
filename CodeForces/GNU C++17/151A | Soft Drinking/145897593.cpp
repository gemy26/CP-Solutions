#include <iostream>
 
using namespace std;
 
int main()
{
   int  n, k, l, c, d, p, nl, np;
int x,y,z;   int m;
cin>>n>> k>> l>> c>> d>> p>> nl>> np;
 
x=(k*l)/nl;
y=(c*d);
z=p/np;
m=min(x,y);
cout<<min(m,z)/n;
 
    return 0;
}