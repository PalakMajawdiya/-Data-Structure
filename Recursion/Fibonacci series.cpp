// Fibonacci series

#include<iostream>
using namespace std;

// Using Iterative Method

int fib(int n)
{
    int t0=0,t1=1,s,i;
    cout<<t0<<" "<<t1<<" ";
    if(n<=1)
    {
        return n;
    }
    else
    {
        for(i=2;i<=n;i++)
        {
            s = t0+t1;
            t0=t1;
            t1=s;
            cout<<s<<" ";
        }
    }
    return s;
}


// recursive Method

int fibr(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
       return fib(n-2)+fib(n-1);
    }
    
}
int main()
{
   cout<<"The series is: ";
   int res = fibr(6);
   cout<<"\nThe result is: "<<res;
    
    return 0;
}