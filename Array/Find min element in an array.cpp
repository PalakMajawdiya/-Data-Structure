//Min function to find minimum element in an array

#include <iostream>
using namespace std;


class array
{
    public:
    int *A;
    int size;
    int length;
}arr;


int Min(array arr)
{
    int i;
    int min = arr.A[0];
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]<min)
        {
            min = arr.A[i];
        }
    }
    return min;
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
    cout<<"\nMinimum element in an array is: "<<Min(arr);
    return 0;
}
