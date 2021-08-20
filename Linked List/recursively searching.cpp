// searching in a linked list using recursion


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


node * rsearch(node *p , int key)
{
    if(p==NULL)
    {
        return NULL;
    }
    else
    {
        if(key==p->data)
        {
            return(p);
        }
        else
        {
            return rsearch(p->next,key);
        }
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
    cout<<"\nEnter element to be searched: ";
    cin>>key;
    res=rsearch(first,key);
    if(res)
    {
        cout<<"\nKey is found at: "<<res;
    }
    else
    {
        cout<<"\nKey is not found";
    }
    
    return 0;
}
