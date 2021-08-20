// Insertion in a linked lists

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

int count(node *p)
{
    int c=0;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    return c;
}
void insert(node *p , int index , int x)
{
    if(index < 0 || index > count(p))
    {
        return ; 
    }
    node *t=NULL;
    t=new node();
    t->data=x;
    
    if(index==0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
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
    cout<<"\nLinked lists before insertion is: ";
    display(first);
    cout<<endl;
    insert(first , 0 , 17);
    cout<<"\nLinked Lists after insertion is: ";
    display(first);
   
    return 0;
}
