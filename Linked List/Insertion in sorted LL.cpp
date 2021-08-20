// Insertion in a sorted  linked lists

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
void sortedinsert(node *p ,int x)
{
  node *q=NULL;
  node *t=NULL;
  t=new node();
  t->data=x;
  t->next=NULL;
  if(first==NULL)
  {
      first=t;
  }
  else
  {
      while(p!=NULL && p->data<x)
      {
          q=p;
          p=p->next;
      }
      if(p==first)
      {
          t->next=first;
          first=t;
      }
      else
      {
          t->next=q->next;
          q->next=t;
      }
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
    cout<<"\nEnter element to be inserted: ";
    cin>>key;
    sortedinsert(first , key);
    cout<<"\nLinked Lists after insertion is: ";
    display(first);
   
    return 0;
}
