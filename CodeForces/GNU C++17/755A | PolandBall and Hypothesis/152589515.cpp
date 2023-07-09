#include <bits/stdc++.h>
using namespace std;
 
bool isprime(int x)
{
  for (int i = 2; i <= x / i; i++)
    if (x % i == 0)
      return false;
  return true;
}
int main()
{
  int res = 0;
  int n;
  cin >> n;
  for(int i=1;;i++)
{
    res = (n * i) + 1;
    if (!isprime(res))
    {
      cout << i;
      return 0;
    }
    
  }
}