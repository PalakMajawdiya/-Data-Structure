//Reverse in doubly LL

#include <iostream>

using namespace std;

class node
{
    public:
    node *prev;
    int data;
    node *next;
};
node *first=NULL;

void create(int a[],int n)
{
    node *t , *last;
    first = new node();
    first->data=a[0];
    first->prev=NULL;
    first->next=NULL;
    last=first;
    
    for(int i=1;i<n;i++)
    {
        t= new node();
        t->data=a[i];
        t->prev=last;
        t->next=last->next;
        last->next=t;
        last=t;
    }
}


void DReverse(node *p)
{
    node *temp=NULL;
    while(p!=NULL)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL)
        {
            first=p;
        }
    }
}

void Display(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
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
    
    Display(first);
    DReverse(first);
    cout<<"\nElements in LL after Reversing: ";
    Display(first);
    

    return 0;
}
