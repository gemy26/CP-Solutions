// #include <bits/stdc++.h>
// #include<vector>
 
// #define ll long long
// #define el "\n"
// using namespace std;
// //------is prime---------//
// bool isprime(int x)
// {
//   for (int i = 2; i <= x / i; i++)
//     if (x % i == 0)
//       return false;
//   return true;
// }
// //----------binary search--------//
//  int binarysearch(int a[],int key,int low,int high)
//  {
//   int middle=(low+high)/2;
//   if(a[middle]==key) return middle;
//   if(key>middle)return binarysearch(a,key,middle+1,high);
//   else
//     return binarysearch(a,key,low ,middle-1);
//  }
//  //--------GCD---------------//
//  int gcd(int a, int b)
// {
//     if (a == 0)
//        return b;
//     if (b == 0)
//        return a;
//     if (a == b)
//         return a;
//     if (a > b)
//     return gcd(a-b, b);
//     return gcd(a, b-a);
// }
// //-----------------------//
// const int AK=5e5+5;
// const long long VVB=5e9+5; 
// //----------------------//
// int main()
// {
// int t;
// cin>>t;
// while(t--)
// {
//   int k; cin>>k;
 
//   float   summ=0;
//   int sum=0;
//   float x=999;
//   if(k==100){cout<<1<<endl; continue;}
//   else
//   {
//     for(float  i=1;i<=102;i++)
//   {
//     for(float j=1;j<=102;j++)
//     {
//       summ=i+j;
//       float res=(i/summ)*100;
//       if((float)k==res){
//         sum=summ;
//          goto here;
//       }
//     }
//   }
//   }
  
//  // cout<<x<<endl;
//   here:
//   if(sum==0){cout<<100<<endl; continue;}
//   //cout<<100;
// //else
//   cout<<sum;
//   cout<<endl;
// }
 
// }
 
// // &&(100-res)==(100-test)
 
 
#include <bits/stdc++.h>
#include<vector>
 
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
 int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
    return gcd(a-b, b);
    return gcd(a, b-a);
}
//-----------------------//
const int AK=5e5+5;
const long long VVB=5e9+5; 
//----------------------//
int main()
{
int t;
cin>>t;
while(t--)
{
  float k; cin>>k;
  
  float sum=0;
  int x=0;
  if(k==100){cout<<1<<endl; continue;}
  for(float  i=1;i<=200;i++)
  {
    for(float j=1;j<=200;j++)
    {
      sum=i+j;
      float res=0; res=(i/sum);
      //int test=res;
      if(k/100==res){
     // x=min(x,(i+j));
    //  continue;
       // x=min(x,(i+j));
        x=sum;
        //cout<<res<<endl;
       // cout<<sum<<endl;
        //cout<<i<<" "<<j<<endl;
       goto here;
       // cout<<i+j<<endl;
      }
    }
  }
  here:
  if(x==0){cout<<100<<endl; continue;}
  cout<<x<<endl;
  
}
 
//}
 
}
  
 
// &&(100-res)==(100-test)