//Recursively finding maximum element in a linked list 


#include <iostream>
#include<climits>

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

int min(node *p)
{
    int x = INT_MAX;
    while(p!=NULL)
    {
        if(x>p->data)
        {
          x=p->data;
        }
        p=p->next;
    }
    return x;
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
    M=min(first);
    cout<<"\nMaximum element in a linked list is: "<<M;

    return 0;
}
