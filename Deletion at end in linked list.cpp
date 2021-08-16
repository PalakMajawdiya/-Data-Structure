

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
    node *new_node = NULL;
    new_node = new node();
    new_node->data = new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
    
}

void deleteend(node **head_ref)
{
    if((*head_ref)==NULL)
    {
        cout<<"List is empty";
        
    }
    else
    {
        if((*head_ref)->next==NULL)
        {
        free(*head_ref);
        (*head_ref)=NULL;
        }
        else
        {
            node *ptr , *prev;
            ptr = (*head_ref);
            while(ptr->next!=NULL)
            {
                prev=ptr;
                ptr=ptr->next;
            }
            free(ptr);
            prev->next=NULL;
        }
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
   insert(&head,2);
   insert(&head,4);
   insert(&head,5);
   insert(&head,6);
   insert(&head,7);
   insert(&head,8);   
   insert(&head,9);
   insert(&head,10);
   insert(&head,15);
   cout<<"List before deleting: ";
   printlist(head);
   deleteend(&head);
   cout<<"\nList after performing deleting operation: ";
   printlist(head);
}
