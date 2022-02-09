//Program for sum of natural number using Recursion

#include <iostream>

using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return sum(n-1)+n;
    }
}

int main()
{
    int n;
    cout<<"Enter no. to calculate the sum: ";
    cin>>n;
    cout<<"The sum is: "<<sum(n);

    return 0;
}
