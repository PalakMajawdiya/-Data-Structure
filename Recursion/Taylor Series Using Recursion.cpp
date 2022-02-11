// Taylor series using Recursion

#include<iostream>
using namespace std;

double ex(int x , int n)
{
    static double p=1 , f=1;
    double res;
    
    if(n==0)
    {
        return 1;
    }
    else
    {
        res = ex(x,n-1);
        p = p*x;
        f = f*n;
        cout<<res+p/f<<" ";
        return res + p/f;
    }
}

int main()
{
    cout<<"The series is: ";
    double r = ex(3,10);
    
    cout<<"\nThe result is: "<<r;
    
    return 0;
}
