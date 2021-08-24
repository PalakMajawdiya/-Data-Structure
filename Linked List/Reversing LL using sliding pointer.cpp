// Reversing a linked lists using sliding pointer

#include <iostream>


using namespace std;

class node
{
    public:
    int data;
    node *next;
};
node *first=NULL;

void create(int a[] , int n)
{
    first=new node();
    node *t , *last;
    first->data=a[0];
    first->next=NULL;
    last = first;
    
    for(int i=1;i<n;i++)
    {
        t=new node();
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void reversell(node *p)
{
    node *q=NULL , *r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void display(node *p)
{
  
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}




int main()
{
    int n,a[n];
    cout<<"Enter number of elements in LL: ";
    cin>>n;
    cout<<"\nEnter elements in a Linked Lists: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   
    create(a,n);
    cout<<"\nElements in LL are: ";
    display(first);
    cout<<endl;
    reversell(first);
    cout<<"\nAfter reversing  LL is: ";
    display(first);
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    