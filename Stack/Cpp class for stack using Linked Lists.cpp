//cpp class of stack using Linked Lists

#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};

class stack
{
    private:
        node *Top;
    public:
        stack()
        {
            Top=NULL;
        }
        void push(int x);
        int pop();
        void Display();
};

void stack::push(int x)
{
    node *t = new node;
    if(t==NULL)
    {
        cout<<"\nStack is Full";
    }
    else
    {
        t->data=x;
        t->next=Top;
        Top=t;
    }
}

int stack::pop()
{
    int x=-1;
  if(Top==NULL)
  {
      cout<<"\nStack is Empty";
  }
  else
  {
      x=Top->data;
      node *t=Top;
      Top=Top->next;
      delete t;
  }
  return x;
}

void stack::Display()
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
    stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    cout<<"\nElements is stack are: ";
    stk.Display();
    
    cout<<"\nAfter performing pop operation elements in stack are: ";
    stk.pop();
    stk.Display();
    
    return 0;
}