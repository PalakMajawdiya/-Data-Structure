//Linear search

#include <iostream>
using namespace std;


class array
{
    public:
    int *A;
    int size;
    int length;
}arr;

int LinearSearch(array arr,int key)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(key==arr.A[i])
        {
            return i;
        }
    }
    return 0;
}

void Display(array arr)
{
    int i;
    cout<<"\nElements are: ";
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
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
    
    cout<<"The given element is found at position: "<<LinearSearch(arr,4);
    Display(arr);
    return 0;
}

