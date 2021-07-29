// To print the series in backward direction 

#include<stdio.h>

int series(int x)
{
    
    if(x==0)
    {
        return 0;
    }
  
    else
    {
        printf("\n %d",x);
        return series(x-1);
    }
}
int main()
{
    int n;
   
    printf("Enter the No. from which  the series will print  in backward: ");
    scanf("%d",&n);
    printf("\n The series in backward is : ");
    series(n);
  
    return 0;
    
}
