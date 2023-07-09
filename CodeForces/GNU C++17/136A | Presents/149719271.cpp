#include<iostream>
//#include<bits/stdc++>
#include<string>
using namespace std;
int main( ){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){cin>>arr[i];}
for (int i=0;i<n+1;i++){
    for(int j=0;j<n+1;j++){
        if(i==arr[j]){
            cout<<j+1<<" ";
            
        }
    }
}
    return 0;
}