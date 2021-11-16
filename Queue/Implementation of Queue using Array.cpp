//Queue using Array 

#include<iostream>
using namespace std;

class Queue
{
   public:
   int size;
   int front;
   int rear;
   int *Q;
};

//Function to create Queue
void create(Queue *q , int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new int;
    
}

//Function to insert element in queue 
void enqueue(Queue *q , int x)
{
    if(q->rear==q->size-1)
    {
        cout<<"\nQueue is Full";
    }
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}

//Function to delete and element from queue
int dequeue(Queue *q)
{
   int x=-1;
   if(q->front == q->rear)
   {
       cout<<"\nQueue is empty";
   }
   else
   {
       q->front++;
       x = q->Q[q->front];
   }
   return x;
}

//Function to print elements of Queue
void display(Queue *q)
{
    for(int i=q->front+1;i<=q->rear;i++)
    {
        cout<<q->Q[i]<<" ";
        
    }
}

//Drive Code
int main()
{
    Queue q;
    int s;
    cout<<"\nEnter size of Queue: ";
    cin>>s;
    create(&q,s);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    cout<<"\nElements in Queue are: ";
    display(&q);
    cout<<"\nDeletd element is: "<<dequeue(&q);
    
    
}

