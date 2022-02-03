// Tree Recursion: If a function calls iteself more than one time then it is Tree Recursion

#include <iostream>

using namespace std;


void fun(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
    
}
    
int main()
{
    fun(3);

    return 0;
}
