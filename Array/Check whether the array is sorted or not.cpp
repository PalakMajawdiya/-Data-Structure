//check whether the array is sorted or not

#include <iostream>

using namespace std;

class array
{
    public:
    int *A;
    int size;
    int length;
}arr;

int isSorted(array arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.A[i] > arr.A[i+1])
        {
            return 0;
        }
    }
    return 1;
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
    
    if(isSorted(arr))
    {
        cout<<"\nArray is sorted";
    }
    else
    {
        cout<<"\nArray is not sorted";
    }
    Display(arr);
  
    

    return 0;
}
