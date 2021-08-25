//Merging of two link lists

#include <iostream>

using namespace std;

class node
{
    public:
    int data;
    node *next;
};
node *first=NULL;
node *second=NULL;
node *third=NULL;

void create(int a[],int n)
{
    first=new node();
    node *t,*last;
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node();
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void create2(int b[],int m)
{
    second=new node();
    node *t,*last;
    second->data=b[0];
    second->next=NULL;
    last=second;
    for(int i=1;i<m;i++)
    {
        t=new node();
        t->data=b[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void merge(node *p , node *q)
{
    node *last=NULL;
    
    // Initial Step For merge
    
    if(p->data<q->data)
    {
        third=last=p;
        p=p->next;
        last->next=NULL;
    }
    else
    {
        third=last=q;
        q=q->next;
        last->next=NULL;
    }
    while(p!=NULL && q!=NULL)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p!=NULL)
    {
        last->next=p;
    }
    else
    {
        last->next=q;
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
    int n,m,a[n] , b[m];
    cout<<"Enter number of elements in first LL:  ";
    cin>>n;
    cout<<endl;
    cout<<"Enter number of elements in second LL: ";
    cin>>m;
    
    cout<<"\nEnter elements in first LL: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter elements in second LL: ";
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    create(a,n);
    create2(b,m);
    cout<<"\nElements in a first linked list are: ";
    display(first);
    cout<<endl;
    cout<<"\nElements in a second linked list are: ";
    display(second);
    merge(first,second);
    cout<<"\nAfter Merging LL is: ";
    display(third);

}
