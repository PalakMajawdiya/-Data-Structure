//Binary Search using iterative method

#include <iostream>

using namespace std;

class array
{
    public:
    int *A;
    int size;
    int length;
}arr;

int BinSearch(array arr, int key)
{
    int l,mid,h;
    l = 0;
    h = arr.length - 1;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key == arr.A[mid])
        {
            return mid;
        }
        else
        {
            if(key < arr.A[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return -1;
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
    
    cout<<"The given element is found at position: "<<BinSearch(arr,4);

    return 0;
}
