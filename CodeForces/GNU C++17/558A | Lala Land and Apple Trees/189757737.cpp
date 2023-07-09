#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>>right;
    vector<pair<int,int>>left;
 
    int sum = 0,x,y;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        if(x > 0)
            right.push_back({x,y});
        else
            left.push_back({x,y});
 
    }
    sort(left.rbegin(),left.rend());
    sort(right.begin(),right.end());
    if(left.size()==0 && right.size()!=0 ){cout<<right[0].second; return 0;}
    if(left.size()!=0 && right.size()==0 ){cout<<left[0].second; return 0;}
 
    int i= 0,j=0;
    int m = min(right.size(),left.size());
    bool l=false,r=false;
    while(j<left.size()&&i<right.size())
    {
 
        sum+=left[j].second;
        sum+=right[i].second;
 
        i++,j++;
    }
 
    if(i<right.size() && j==left.size() ){sum+=right[i].second;
    }
    if(j<left.size()&&i==right.size()  ){sum+=left[j].second;
    }
    cout<<sum;
//for(auto i : right)
//    cout<<i.first<<' ';
//cout<< endl;
//    for(auto i : left)
//        cout<<i.first<<' ';
}
 