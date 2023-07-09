#include<bits/stdc++.h>
 
#define FAST ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
using namespace std;
 
 
 
int main()
{
 
    FAST
 
    int n;
    cin>>n;
    int a[n];
    int aa[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
 
    }
    for(int i=0; i<n; i++)
    {
       aa[i]=a[i];
 
    }
    int one;
    int two;
    int diff=INT_MAX;
   /// sort(aa,aa+n);
    for (int i=0; i<n-1; i++){
      if (abs(a[i+1] - a[i] )< diff){
          diff = abs(a[i+1] - a[i]);
          one=i+1;
          two=i+2;
      }
    }
    if(abs(a[0]-a[n-1])<=diff){
         one=1;
    two=n;
 
    }
    cout<<one <<" "<<two;
 
 
 
 
    return 0;
}