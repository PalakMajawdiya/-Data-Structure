//Reversing of an array using auxiliary array

#include <iostream>

using namespace std;

class array
{
    public:
    int *A;
    int size;
    int length;
}arr;


void reverse(array *arr)
{
    int *B;
    int i,j;
    B = new int(arr->length);
    for(i=arr->length-1,j=0;i>=0;i--,j++)
    {
        B[j] = arr->A[i];
    }
    for(i=0;i<arr->length;i++)
    {
        arr->A[i] = B[i];
    }
}

void Display(array arr)
{
    int k;
    cout<<"\nElements are: ";
    for(k=0;k<arr.length;k++)
    {
        cout<<arr.A[k]<<" ";
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
    
    reverse(&arr);
    Display(arr);
    

    return 0;
}
