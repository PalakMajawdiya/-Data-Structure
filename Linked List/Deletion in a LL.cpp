// Deletion in a LL

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

void deletenode(node *p , int pos)
{
  node *q=NULL;
  int x=-1 , i;
  if(pos<1)
  {
      cout<<"\nInvalid index ";
  }
  if(pos==1)
  {
      p=first;
      x=first->data;
      first=first->next;
      ;
  }
  else
  {
      p=first;
      q=NULL;
      for(i=0;i<pos-1&&p;i++)
      {
          q=p;
          p=p->next;
      }
      if(p)
      {
          q->next=p->next;
          x=p->data;
      }
      delete(p);
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
    cout<<"\n Enter the position of node to be deleted: ";
    cin>>key;
    create(a,n);
    cout<<"\nLL before deletion: ";
    display(first);
    deletenode(first ,key);
    cout<<"\nLL after deletion: ";
    display(first);
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    