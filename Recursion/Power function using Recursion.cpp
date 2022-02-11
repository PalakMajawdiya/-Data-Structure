//Program for power function

#include <iostream>

using namespace std;

int power(int m , int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return power(m,n-1)*m;
    }
}

//Optimized version of power function

int power1(int m , int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        if(n%2==0)
        {
            return power1(m*m,n/2);
        }
        else
        {
            return m*power1(m*m,(n-1)/2);
        }
    }
}


int main()
{
   int res = power(2,9);
   cout<<"Result is: "<<res<<endl;
   
   int res1 = power1(2,9);
   cout<<"The result from optimized version is: "<<res1;

    return 0;
}
