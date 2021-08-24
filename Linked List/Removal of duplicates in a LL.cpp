// Removal duplicates from LL

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

void removeduplicate(node *p)
{
    node *q=p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            delete(q);
            q=p->next;
        }
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
    removeduplicate(first);
    cout<<"\nAfter removal of dupliactes LL is: ";
    display(first);
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    