// create a Doubly Linked Lists

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

void display(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    
}

int length(node *p)
{
    int c=0;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    return c;
}
int main()
{
    int n , a[n];
    cout<<"No. of elements in LL: ";
    cin>>n;
    cout<<"\nElements in LL: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    create(a,n);
    cout<<"\nElements in LL are: ";
    display(first);
    cout<<"\nLength of a LL is: "<<length(first);
    return 0;
    
}