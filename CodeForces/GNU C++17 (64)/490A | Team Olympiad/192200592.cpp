#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
// here we go
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
int main(){
    vector<int >one;
    vector<int >two;
    vector<int >three;
 
    int counter=0;
    int n;
    int ones=0,twos=0,threes=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){ones++;  one.push_back(i+1);}
        else if(arr[i]==2){twos++;two.push_back(i+1);}
        else {threes++;three.push_back(i+1);}
    }
    counter=min(min(ones,twos),threes);
    cout<<counter<<endl;
    for(int i=0;i<counter;i++)
    {
        cout<<one[i]<<" "<<two[i]<<" "<<three[i];
        cout<<endl;
    }
 
}
 