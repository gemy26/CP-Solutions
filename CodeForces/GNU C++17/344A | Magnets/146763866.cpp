#include<iostream>
//#include<bits/stdc++>
#include<string>
using namespace std;
int main( ){
int n,f,s,flag=0,counter=0;
string x,temp;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x;
    if(i==0){
        temp=x;
        continue;
    }
    if(temp[0]==x[1]){counter++;}
    temp=x;
}
 
    cout<<counter+1;
    return 0;
}