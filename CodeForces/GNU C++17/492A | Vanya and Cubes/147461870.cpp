#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,counter=0;
    cin>>n;
    int j;
   for(int i=0;i<100;i++){
    counter+=( (i*(i+1))/2);
    if(counter>n){
        cout<<i-1;
        return 0;
    }
   }
   
    
    return 0;
}