// Improved searching in a linked list with move to head method


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


node * Lsearch(node *p , int key)
{
   node *q=NULL;
   while(p!=NULL)
   {
       if(key==p->data)
       {
           q->next=p->next;
           p->next=first;
           first=p;
           return (p);
       }
       q=p;
       p=p->next;
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
    int n,a[n],key;
    node *res;
    cout<<"Enter number of elements in LL: ";
    cin>>n;
    cout<<"\nEnter elements in a Linked Lists: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    create(a,n);
    cout<<"\nElements in a LL are: ";
    display(first);
    cout<<endl;
    cout<<"\nEnter element to be searched: ";
    cin>>key;
    res=Lsearch(first,key);
    if(res)
    {
        cout<<"\nKey is found at: "<<res;
    }
    else
    {
        cout<<"\nKey is not found";
    }
    cout<<endl;
    cout<<"\nAfter searching LL will be: ";
    display(first);
    
    return 0;
}
