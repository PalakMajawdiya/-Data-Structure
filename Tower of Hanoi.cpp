//Tower of Hanoi Problem

#include<iostream>
using namespace std;


void TOH(int n , char source , char destination , char aux)
{
    if(n==1)
    {
        cout<<"Move disk 1 from source "<<source<<" to destination "<<destination<<endl;
        return; 
    }
    
    TOH(n-1 , source , aux , destination);
    cout<<"Move disk "<<n<<" from source "<<source<<" to destination "<<destination<<endl;
    TOH(n-1 , aux , destination , source);
    
}

int main()
{
    int n;
    cout<<"Enter no. of disks"<<endl;
    cin>>n;
    TOH(n , 'A' , 'B' , 'C'); //n is no. of disks and A,B,and C are the tower
    return 0;
}