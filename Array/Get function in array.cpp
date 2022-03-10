//Get function to get element in an array

#include <iostream>
using namespace std;


class array
{
    public:
    int *A;
    int size;
    int length;
}arr;


int Get(array arr, int index)
{
    if(index>=0 && index<=arr.length)
    {
        return arr.A[index];
    }
    return -1;
}

int main()
{
    int n,i,index;
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
    cout<<"\nEnter index to get value: ";
    cin>>index;
    
    arr.length = n;
    cout<<"Value at given index is: "<<Get(arr,index);

    return 0;
}
