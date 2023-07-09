 
 
    #include <iostream>
 
using namespace std;
 
int main()
{
    int counter=0;
    int n,h;
    int a;
    int i=1;
    cin>>n;
    cin>>h;
 
    while(i<=n)
    {
        cin>>a;
        if(h>=a)
            counter++;
           else
 
                counter+=2;
 
   i++;
 }
 cout<<counter;
 
    return 0;
}
 