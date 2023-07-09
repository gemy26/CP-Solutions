#include <bits/stdc++.h>
#include<string.h>
#define ll long long
#define el "\n"
using namespace std;
//------is prime---------//
bool isprime(int x)
{
    for (int i = 2; i <= x / i; i++)
        if (x % i == 0)
            return false;
    return true;
}
//--------GCD---------------//
 
//-----------------------//
const int AK=5e5+5;
const long long VVB=5e9+5;
//----------------------//
int n,k;
int cnt = 0;
 
 
 
int main() {
    char ch1,ch2;
    int t;
    cin>>ch1>>ch2;
    string a="^>v<";
    //char a[]={'^','>','v','<'};
    cin>>t;
    t%=4;
    int n = t;
    n-=1;
    int index;
    int flag;
    int i = a.find(ch2);
 
    if(ch1=='^'&&ch2=='v' || ch1=='<'&&ch2=='>' ||ch1=='v'&&ch2=='^' || ch1==ch2 )
    {cout<<"undefined"; return 0;}
 
    else
    {
         index = a.find(ch1);
        index+=t;
        index%=4;
 
    }
//string res;
    if(a[index]==ch2)cout<<"cw";
    else
        cout<<"ccw";
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 