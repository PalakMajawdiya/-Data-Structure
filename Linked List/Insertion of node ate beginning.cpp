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
  cout<<"The updated linked list is: ";
  printlist(head);
  return 0;
  
  
}
