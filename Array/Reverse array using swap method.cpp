//Reversing of an array using swap method

#include <iostream>

using namespace std;

class array
{
    public:
    int *A;
    int size;
    int length;
}arr;


void swap(int *x , int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}



void reverse(array *arr)
{
 int i,j;
 for(i=0,j=arr->length-1;i<j;i++,j--)
 {
     swap(&arr->A[i] , &arr->A[j]);
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
