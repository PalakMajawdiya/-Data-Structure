//Program to insert a node at the beginning of a list


#include<iostream>
using namespace std;

 int count=0;

class node
{
    public:
    int data;
    node *next;
};

void insertbeg(node **head_ref , int new_data)
{
    node *new_node = NULL;
    
    new_node = new node();
    
    new_node->data = new_data;
    
    new_node->next = *head_ref;
    
    (*head_ref) = new_node;
    
}

void insertend(node **head_ref , int new_data)
{
    node *new_node =NULL;
    
    new_node = new node();
    
    new_node->data = new_data;
    new_node->next = NULL;
    node *last = *head_ref;
    
    if(*head_ref==NULL)
    {
        *head_ref = new_node;
    }
    else
    {
        while(last->next!=NULL)
        {
           last=last->next; 
        }
        last->next=new_node;
    }
    
}

void insertpos(node *prev_node , int data)
{
    if(prev_node==NULL)
    {
        cout<<"Previous node can't be null";
    }
    else
    {
        node *new_node = NULL;
        new_node = new node();
        new_node->data = data;
        new_node->next=prev_node->next;
        prev_node->next=new_node;
        
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
  node *head = NULL;
  
 
  insertbeg(&head , 7);
  insertbeg(&head , 9);
  insertend(&head , 10);
  insertend(&head , 11);
  insertpos(head->next , 8);
  insertpos(head->next , 15);
  cout<<"The updated linked list is: ";
  printlist(head);
  return 0;
  
  
}
