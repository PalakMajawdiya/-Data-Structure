

#include <iostream>

using namespace std;

class node
{
    public:
    int data;
    node *next;
};

void insert(node **head_ref , int new_data)
{
    node *new_node=NULL;
    new_node = new node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    (*head_ref)=new_node;
}

void deletebeg(node **head_ref)
{
    if(*head_ref==NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        node *ptr = NULL;
        ptr = *head_ref;
        *head_ref = (*head_ref)->next;
        free(ptr);
    
    }
}

void printlist(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    node *head=NULL;
    insert(&head , 7);
    insert(&head , 8);
    insert(&head , 9);
    insert(&head , 10);
    insert(&head , 11);
    insert(&head , 15);
    cout<<"original list: ";
    printlist(head);
    deletebeg(&head);
    cout<<"\nafter deleting beginning element List is: ";
    printlist(head);
    
    
}
