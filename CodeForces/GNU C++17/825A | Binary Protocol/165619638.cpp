#include <iostream>
#include <map>
#include<vector>
using namespace std;
int main(void) {
 
  int n;
  cin>>n;
  string s;
  cin>>s;
  int cnt = 0;
  int flag =0;
  int zero =0;
  vector<int>ones;
vector<int>zeros;
vector<int>res;
  for (int i = 0; i < s.size(); ++i)
  {
      if(s[i] == '0' ){cout<<ones.size(); ones.clear();continue;}
      if( s[i] == '1'){
          ones.push_back(i);
          if(zeros.size() >=1 ){cout<<0; zeros.clear();continue;}
         }
      if(s[i] == '0'){zeros.push_back(i); }
  }
  cout<<ones.size();
 
}