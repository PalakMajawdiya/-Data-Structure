// Taylor series using Horner's rule - iterative method

#include<iostream>
using namespace std;

double ex(int x , int n)
{
    double s =1;
    int i;
    double num=1;
    double den=1;
    
    for(i=1;i<=n;i++)
    {
        num = num*x;
        den = den *i;
        s = s+ num/den;
    }
    return s;
}

int main()
{
    
    double r = ex(3,10);
    
    cout<<"\nThe result is: "<<r;
    
    return 0;
}
