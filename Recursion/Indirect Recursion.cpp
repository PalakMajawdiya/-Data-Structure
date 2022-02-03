// Indirect Recursion: If there are more than one function and they are calling each other in a circular manner then it is indirect recusrion

#include<iostream>
using namespace std;

void funA(int n);

void funB(int n)
{
    if(n>1)
    {
        cout<<n<<" ";
        funA(n/2);
    }
}
void funA(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        funB(n-1);
    }
}



int main()
{
    funA(20);
    
    return 0;
}