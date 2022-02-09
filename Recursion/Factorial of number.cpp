//Program to calculate factorial of a number using Recursion

#include <iostream>

using namespace std;

int fact(int n)
{
    if((n==0) or (n==1))
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}

int main()
{
    int n;
    cout<<"Enter no. to calculate the factorial: ";
    cin>>n;
    cout<<"The sum is: "<<fact(n);

    return 0;
}
