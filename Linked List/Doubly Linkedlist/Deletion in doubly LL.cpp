//Deletion in doubly LL

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

int Delete(node *p,int index)
{
  
    int x;
    if(index<1||index>length(p))
    {
        return -1;
    }
    
    if(index==1)
    {
       first=first->next;
       if(first)
       {
           first->prev=NULL;
       }
       x=p->data;
       delete p;
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next)
        {
            p->next->prev=p->prev;
        }
        x=p->data;
        delete(p);
    }
    return x;
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
    
    Delete(first,3);
    cout<<"\nElements in LL after deletion: ";
    display(first);
    

    return 0;
}
