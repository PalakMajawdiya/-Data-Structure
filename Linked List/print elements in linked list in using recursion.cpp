//Program to display elements in linked list recursively

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
    node *t , *last;
    first = new node();
    first->data=a[0];
    first->next=NULL;
    last=first;
    
    for(int i=1;i<n;i++)
    {
        t = new node();
        t->data = a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        display(p->next);
    }
}
int main()
{
    int n , a[n] ,i ;
    cout<<"Enter number of elements in an array: ";
    cin>>n;
    cout<<"\nEnter elements in an array:  ";
    for(i=0;i<n;i++)
    {
       cin>>a[i]; 
    }
    create(a,n);
    cout<<"Elements created in linked lists are: ";
    display(first);
    
    

    return 0;
}
