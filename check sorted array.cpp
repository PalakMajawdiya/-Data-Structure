// check whether the given array is sorted or not

#include<iostream>
using namespace std;

int isarraysort(int arr[] , int n)
{
    if(n==1||n==0)
    {
        return 1;
        
    }
    if(arr[n-1]<arr[n-2])
    {
        return 0;
    }
 
    return isarraysort(arr , n-1);
    
}

int main()
{
    
    int arr[]={2,3,5,7,9,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    if(isarraysort(arr,n))
    {
        cout<<"yes\n";
        
    }
    else
    {
        cout<<"no";
    }
    return 0;
    
}