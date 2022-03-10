//Max function to find maximum element in an array

#include <iostream>
using namespace std;


class array
{
    public:
    int *A;
    int size;
    int length;
}arr;


int Max(array arr)
{
    int i;
    int max = arr.A[0];
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]>max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int main()
{
    int n,i;
    cout<<"Enter size of an array: ";
    cin>>arr.size;
    arr.A = new int(arr.size);
    arr.length = 0;
    cout<<"\nEnter no. of Elements: ";
    cin>>n;
    
    cout<<"\nEnter all Elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr.A[i];
    }
    
    arr.length = n;
    cout<<"\nMaximum element in an array is: "<<Max(arr);
    return 0;
}
