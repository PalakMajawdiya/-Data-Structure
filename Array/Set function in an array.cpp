//Set function to set a element at a given position

#include <iostream>
using namespace std;


class array
{
    public:
    int *A;
    int size;
    int length;
}arr;


void Set(array *arr, int index, int x)
{
    if(index>=0 && index<=arr->length)
    {
        arr->A[index] = x;
    }
    
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
    int n,i,index,x;
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
    cout<<"\nEnter index to change : ";
    cin>>index;
    cout<<"\nEnter value to be changed: ";
    cin>>x;
    
    arr.length = n;
    Set(&arr,index,x);
    Display(arr);
    return 0;
}
