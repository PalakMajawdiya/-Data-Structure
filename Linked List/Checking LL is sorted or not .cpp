// check whether the LL is sorted or not

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

int  issorted(node *p)
{
   int x=-65536; //Min value for 4 byte integers
   while(p!=NULL)
   {
       if(p->data<x)
       {
           return 0;
       }
       else
       {
           x=p->data;
           p=p->next;
       }
   }
   return 1;
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
    if(issorted(first))
    {
        cout<<"\nLinked Lists is sorted";
    }
    else
    {
    cout<<"\nLinked lists is not sorted";    
    }
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    