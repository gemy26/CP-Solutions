#include <iostream>
 
using namespace std;
 
int main()
{
    int x,y,z;
    int arr[3];
    int t;
    cin>>t;
    while(t--)
    {
       int counter=0;
        int max_val,val;
 
        for(int i=0; i<3; i++)
        {
            cin>>arr[i];
        }
        max_val = arr[0];
 
        if(arr[0]==arr[1]&&arr[1]==arr[2])
        {
            cout<<arr[1]-arr[1]+1<<" "<<arr[1]-arr[1]+1 <<" "<<arr[1]-arr[1]+1<<endl;
            continue;
        }
 
 
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] > max_val)
            {
                max_val = arr[i];
                val=i;
            }
 
        }
         for (int i = 0; i < 3; i++)
        {
            if (arr[i] == max_val)
            {
                counter++;
            }
 
        }
 
        for(int j=0; j<3; j++)
        {
           if(counter==1){
            if(arr[j]<max_val)
            {
                cout<<max_val-arr[j]+1<<" ";
            }
            else if(max_val==arr[j])
            {
                cout<<0<<" ";
            }
           }
 
            else
                cout<<max_val-arr[j]+1<<" ";
 
 
 
 
 
 
 
        }
 
 
 
 
 
 
 
        cout<<endl;
    }
 
 
 
 
 
 
    return 0;
}