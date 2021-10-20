// Implementation of Stack Using array
//operations performed are create() , display() , push() , pop(), isempty() , isfull() , peek() , stacktop()

#include<iostream>
using namespace std;

class Stack
{
    public:
    int top;
    int size;
    int *s; //array for storing element
};

//create() function for creating stack
void create(Stack *st)
{
    cout<<"Enter Size: ";
    cin>>st->size;
    st->top = -1;
    st->s = new int(st->size);
}

//display() function for printing element present in stack
void display(Stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        cout<<st.s[i]<<endl;
    }
}

//push() function to insert element in stack
void push(Stack *st , int x)
{
    if(st->top == st->size-1)
    {
        cout<<"\nStack Overflow"<<endl;
    }
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}

//pop() function to delete an element in stack
int pop(Stack *st)
{
    int x=-1;
    if(st->top==-1)
    {
        cout<<"\nStack Underflow"<<endl;
    }
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

//peek() function to find an element at a given position
int peek(Stack st , int pos)
{
    int x = -1;
    if(st.top-pos+1<0)
    {
        cout<<"\nInvalid Position";
    }
    else
    {
        x = st.s[st.top-pos+1];
    }
    return x;
    
}

//isempty() function to check whether stack is empty or not_eq
int isEmpty(Stack st)
{
    if(st.top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//isFull() function to check whether the stack is full or not
int isFull(Stack st)
{
    if(st.top==st.size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//stacktop() function is ised to find the top of the Stack
int stacktop(Stack st)
{
    if(st.top==-1)
    {
        return -1;
    }
    else
    {
        return st.s[st.top];
    }
}

int main()
{
    Stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    
    cout<<"\nInserted element are: "<<endl;
    display(st);
    
    cout<<"\nElement at given index is: "<<peek(st , 2);
    
    
    cout<<"\nPop element is: "<<pop(&st);
    cout<<"\nAfter pop elements are: "<<endl;
    display(st);
    
    return 0;
    
}
