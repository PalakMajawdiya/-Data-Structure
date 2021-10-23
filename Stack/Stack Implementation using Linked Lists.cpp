//Operations on stack using Linked Lists

#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
} *Top = NULL;

//Push Function
void push(int x)
{
    node *t;
    t = new node;
    
    if(t==NULL)
    {
        cout<<"Stack is FULL"<<endl;
    }
    else
    {
        t->data=x;
        t->next=Top;
        Top=t;
    }
}

//Pop function
int pop()
{
    node *t;
    int x=-1;
    
    if(Top==NULL)
    {
        cout<<"\nStack is Empty"<<endl;
    }
    else
    {
        t=Top;
        Top=Top->next;
        x=t->data;
        delete t;
    }
    return x;
}

//Display Function
void display()
{
    node *p=Top;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}


int main()
{
    push(10);
    push(20);
    push(30);
    cout<<"\nElements inserted in stack are: ";
    display();
    cout<<"\nAfter pop() function elements are: ";
    pop();
    display();
    
    return 0;
}