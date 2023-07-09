#include<bits/stdc++.h>
using namespace std;
bool sortbysecdesc(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
//
//
//int n;
//int res = 0;
//int val = 0;
//void good(int m){
//    int sum  = 0;
//    for (int i = 0; i < n ; ++i) {
//        sum += max(0,abs(v[i] - m) - 1);
//    }
//    if (sum > val){
//        val = sum ;
//        res = m;
//
//    }
//
//}
 
int main() {
 
vector<int>v;
int n;
cin >> n;
v.resize(n);
    for (int i = 0; i < n ; ++i) {
        cin >> v[i];
    }
    int sum = 0,val = 1e6,k;
 
    for (int i = 1; i <= 100 ; ++i) {
        sum = 0;
        for (int j = 0; j < n ; ++j) {
            sum += max(0,abs(i-v[j])-1);
        }
        if(sum < val ){
            val = sum;
            k = i;
        }
    }
cout<<k<<' '<<val<<' ';
 
}