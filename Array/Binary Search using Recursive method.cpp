//Binary Search using Recursive method

#include <iostream>

using namespace std;

class array
{
    public:
    int *A;
    int size;
    int length;
}arr;

int RBinSearch(int a[], int l, int h, int key)
{
    int mid;

    if(l<=h)
    {
        mid = (l+h)/2;
        if(key == a[mid])
        {
            return mid;
        }
        else
        {
            if(key < a[mid])
            {
                return RBinSearch(a,l,mid-1,key);
            }
            else
            {
                return RBinSearch(a,mid+1,h,key);
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
    
    cout<<"The given element is found at position: "<<RBinSearch(arr.A,0,arr.length,6);

    return 0;
}
