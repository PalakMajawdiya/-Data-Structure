//Append an element in an array


#include <iostream>
using namespace std;


class array
{
    public:
    int *A;
    int size;
    int length;
}arr;


//append function
void append(array *arr, int x)
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length++]=x;
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
    
    append(&arr,10);
    Display(arr);
    return 0;
}
