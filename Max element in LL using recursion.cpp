//Recursively finding maximum element in a linked list 


#include <iostream>

using namespace std;

class node
{
    public:
    int data;
    node *next;
};
node *first=NULL;

void create(int a[],int n)
{
    first=new node();
    node *t,*last;
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node();
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(node *p)
{
  while(p!=NULL)
  {
      cout<<p->data<<" ";
      p=p->next;
  }
}

int Rmax(node *p)
{
    int m =-32768;
    int x=0;
    if(p==0)
    {
        return m;
    }
    else
    {
        x=Rmax(p->next);
        return x>p->data?x:p->data;
    }
}


int main()
{
    int n,a[n] , M;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<"\nEnter elements in an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    create(a,n);
    cout<<"\nElements in a linked list are: ";
    display(first);
    M=Rmax(first);
    cout<<"\nMaximum element in a linked list is: "<<M;

    return 0;
}
