#include<bits/stdc++.h>
using namespace std;



#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;

bool cmp(const pair<int, int>& a,const pair<int, int>& b){
    if(a.first == b.first)
        return a.second > b.second;

    return a.first < b.first;
}


//bool cmp(const string& a,const string& b){return a+b < b+a;}


int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);


int A[5];
    bool solve(ll n,int idx){
        if(idx == 5){
            return (n == 23);
        }
        return (solve(n*A[idx],idx+1)||solve(n+A[idx],idx+1)||solve(n-A[idx],idx+1));
    }

void RunCase() {

   while(true){
       bool zero = true;
       for (int i = 0; i < 5 ; ++i) {
           cin >> A[i];
           zero &= (A[i]!=0?true:false);
       }
       if(!zero){
           return;
       }
       sort(A,A+5);
       bool valid = false;
       do{
          if(solve(A[0],1)){
              valid  = true;
              break;
          }
       } while (next_permutation(A,A+5));
       cout<<(valid?"Possible\n":"Impossible\n");

   }




}



int main(){
    HereWeGo();
//    freopen("moocast.in", "r", stdin);
//    freopen("moocast.out", "w", stdout);

    int t = 1;
//    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;

        RunCase();


    }
    return 0;

}