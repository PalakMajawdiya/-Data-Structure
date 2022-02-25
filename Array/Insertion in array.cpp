//Insert an element in an array


#include <iostream>
using namespace std;


class array
{
    public:
    int *A;
    int size;
    int length;
}arr;


//Insertion function
void insert(array *arr,int index, int x)
{
    int i;
    if(index>=0 && index<=arr->length)
    {
      for(i=arr->length;i>index;i--)
      {
          arr->A[i] = arr->A[i-1];
        
       arr->A[index] = x;
       arr->length++;
      }
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
    
    insert(&arr,4,10);
    Display(arr);
    return 0;
}
