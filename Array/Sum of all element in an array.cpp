//Sum function to find sum of all element in an array

#include <iostream>
using namespace std;


class array
{
    public:
    int *A;
    int size;
    int length;
}arr;


int Sum(array arr)
{
    int i;
    int s = 0;
    for(i=0;i<arr.length;i++)
    {
       s = s + arr.A[i];
    }
    return s;
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
    cout<<"\nSum of all elements in an array is: "<<Sum(arr);
    return 0;
}
