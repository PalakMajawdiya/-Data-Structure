//Program for creating a linked list and count number of elements


#include<iostream>
using namespace std;

 int count=0;

class node
{
    public:
    int data;
    node *next;
};

int countdata(node *head)
{
   
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}

int main()
{
    node *head;
    node *second;
    node *third;
    
    head = new node();
    second = new node();
    third = new node();
    
    head->data =7;
    head->next=second;
    
    second->data=9;
    second->next=third;
    
    third->data=1;
    third->next=NULL;
    
    countdata(head);
    cout<<"Total number of elements in linked list is: "<<count;
    return 0;
    
}