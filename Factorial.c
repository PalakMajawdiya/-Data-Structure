
// To calculate factorial of a given integer

#include <stdio.h>

int fact(int x)
{
    if(x==1)
    return 1;
    else
    {
        if(x==0)
        {
        return 0;
        }
        else
        {
            return x*fact(x-1);
        }
    }
}

int main()
{
    int n;
    int f;
    printf("Enter the number to calculate factorial: ");
    scanf("%d",&n);
    f = fact(n);
    printf("\n The factorial of a given integer is %d",f);

    return 0;
}
