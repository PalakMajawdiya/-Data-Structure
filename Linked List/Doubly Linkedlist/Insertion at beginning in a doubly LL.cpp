// Insertion at beginning  in  a Doubly Linked Lists

#include<iostream>
using namespace std;


class node
{
    public:
    node *prev;
    int data;
    node *next;
};
node *first=NULL;

void create(int a[] , int n)
{
    node *t , *last;
    int i;
    first = new node();
    first->prev = NULL;
    first->data = a[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++)
    {
        t = new node();
        t->prev = last;
        t->data=a[i];
        t->next=last->next;
        last->next=t;
        last=t;
        
    }
}

void insert(node *p , int key)
{
    node *t = new node();
    t->data=key;
    t->prev=NULL;
    t->next=first;
    first->prev=t;
    first=t;
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
    int n , a[n] ,x;
    cout<<"No. of elements in LL: ";
    cin>>n;
    cout<<"\nElements in LL: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    create(a,n);
    cout<<"\nElements in LL before insertion are: ";
    display(first);
    cout<<endl;
    cout<<"\nEnter element to be inserted: ";
    cin>>x;
    insert(first , x);
    cout<<"\nElements in LL after insertion are: ";
    display(first);
    
    return 0;
    
}