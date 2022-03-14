//Inserting element in a sorted array

#include <iostream>

using namespace std;

class array
{
    public:
    int *A;
    int size;
    int length;
}arr;




void InsertSort(array *arr, int x)
{
    int i=arr->length-1;
    if(arr->length == arr->size)
    {
        cout<<"\nNo vacant space";
    }
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
    
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
    int n,i,x;
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
    cout<<"\nEnter element to be insert: ";
    cin>>x;
    
    InsertSort(&arr,x);
    Display(arr);
  
    

    return 0;
}
