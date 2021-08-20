//program to create a linked list and print its elements


#include <iostream>

using namespace std;

class node
{
    public:
    int data;
    node *next;
};
node *first = NULL;


void create(int a[] , int n)
{
    int i;
    node *t,*last;
    first = new node();
    first->data = a[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++)
    {
        t = new node();
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
        
    }
    
}

void print(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    int n , a[n] ,i;
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    cout<<"\n enter array elemnts: ";
    for(i=0;i<n;i++)
    {
        
        cin>>a[i];
    }
    create(a,n);
    cout<<"\nyour enter elements in linked list are: ";
    print(first);

    return 0;
}
