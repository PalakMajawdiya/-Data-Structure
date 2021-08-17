// count the number of nodes in a linked list

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
    first=new node();
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t = new node();
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

//recursive count function
int reccount(node *p)
{
    if(p!=NULL)
    {
        return reccount(p->next)+1;
    }
    else
    {
    return 0;
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
    int i,n , a[n];
    cout<<"Enter number of elements in an array: ";
    cin>>n;
    cout<<"\nEnter elements in an array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    create(a,n);
    cout<<"\nTotal number of elements in a linked list by loop  is: "<<count(first);
    cout<<"\nTotal number of elements in a linked list by recursion  is: "<<reccount(first);
    cout<<"\nElements in a  linked list are: ";
    display(first);

    return 0;
}
