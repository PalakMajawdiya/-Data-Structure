// Taylor series using Horner's rule

#include<iostream>
using namespace std;

double ex(int x , int n)
{
    static double s;
    double res;
    
    if(n==0)
    {
        return s;
    }
    else
    {
        s = 1+x*s/n;
        return ex(x,n-1);
    }
}

int main()
{
    
    double r = ex(3,10);
    
    cout<<"\nThe result is: "<<r;
    
    return 0;
}
