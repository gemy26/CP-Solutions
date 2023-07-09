#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
#include<sstream>
using namespace std;
int main()
{
    int j;
    //vector<int >ahmed;
   // vector name.push_back(value) to storing
   //vector name.erase(vector name .begin()+index want to delet);
int t,i;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for( i=0;i<n;i++){
        if((i+1)!=arr[i])
    
            break;
        
    }
    
     for( j=i+1;j<n;j++){
        if(i+1==arr[j])
           
            break;
        
    
    }
    reverse(arr+i,arr+j+1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
cout<<endl;
}
return 0;
}