#include<bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
long long modularbinaryexponential(long long x, int n){
    long long res = 1;
    while(n > 0){
        if(n % 2 == 1)
            res = ((res)*(x));
        x = ((x)*(x));
        n /= 2;
    }
    return res;
}
 
 
int main() {
    fast_cin();
    int n,k;
    cin >> n>>k;
    vector<int> factors;
    int i = 2;
    while (n!=1){
        while(n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
        i++;
    }
   if(factors.size() < k)
       cout << -1;
   else{
       for (int j = 0; j < k-1 ; ++j) {
           cout << factors[j] << ' ';
       }
 
       for (int j = k-1; j < factors.size()-1 ; ++j) {
           factors[factors.size()-1]*=factors[j];
       }
       cout<<factors[factors.size()-1];
   }
}