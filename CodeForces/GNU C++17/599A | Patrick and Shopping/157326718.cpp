#include <bits/stdc++.h>
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
//----------binary search--------//
 int binarysearch(int a[],int key,int low,int high)
 {
  int middle=(low+high)/2;
  if(a[middle]==key) return middle;
  if(key>middle)return binarysearch(a,key,middle+1,high);
  else
    return binarysearch(a,key,low ,middle-1);
 }
 //--------GCD---------------//
int main()
{
 
int d1,d2,d3;
cin>>d1>>d2>>d3;
int one=min((d1+d2+d3),(d2+d2+d3+d3));
int two=min((d1+d1+d2+d2),(d1+d3+d3+d1));
cout<<min(one,two);
 
}