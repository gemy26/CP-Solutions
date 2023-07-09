#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int i=0,j=n-1,max,k=0;
    int r1=0,r2=0;
    while(i<=j)
    {
        if(ar[i]>=ar[j])
        {
           max=ar[i];
           i++;
        }
        else{
            max=ar[j];
            j--;
        }
        if(k%2==0){
          r1+=max;
        }
        else{
          r2+=max;
        }
     k++;
    }
    cout<<r1<<" "<<r2<<endl;
    return 0;
}
 
 