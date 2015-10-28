#include <stdio.h>
#include <stdlib.h>

struct queueRecord{
  int capacity;
  int front;
  int rear;
  int size;
  int *array;
};
struct queueRecord ;
typedef struct queueRecord *Queue ;

int IsFull(Queue Q)
{
  if(Q->size == Q->capacity)
   {
    printf("Queue is full\n");
   }
  return 0;
}

int IsEmpty(Queue Q)
{
  if(Q->size == 0)
   {
    printf("Queue is empty\n");
   }
  return 0;
}

Queue CreateQueue(int maxelements)
{
  Queue Q;
  Q = malloc(sizeof(struct queueRecord));
 //Q->array = (int*)malloc(sizeof(int)*maxelements); this also works but above statement cannot have (struct queueRecord)typecast
  Q->array = malloc(sizeof(int)*maxelements);

  if(Q == NULL)
  {
  }
  if(Q->array == NULL)
  {
  }
  Q->capacity = maxelements;
  Q->size = 0;
  Q->front = 1;
  Q->rear = 0;

  return Q;
}

Front(Queue Q)
{
 if(!IsEmpty(Q))
  {
   return Q->array[Q->front];
  }
  return 0;
}

int succ(int value,Queue Q)
{
  if(value++ != Q->capacity)
  {
    return value;
  }
  return 0;
}

int Enqueue(int x,Queue Q)
{
  if(!IsFull(Q))
  {  
    Q->rear = succ(Q->rear,Q);
    Q->size++;
    Q->array[Q->rear] = x;
  }
  else
  {
   printf("Queue is full\n");
  }
 return 0;
}

int Dequeue(Queue Q)
{
  if(!IsEmpty(Q))
  {
   Q->size--;
   Q->front = succ(Q->front,Q);
  }
  else
  {
   printf("Queue is empty\n");
  }
    
}

int main()
{
 Queue Q;
 Q = CreateQueue(4);

 Enqueue(1,Q);
 Enqueue(2,Q);
 Enqueue(3,Q);
 Enqueue(4,Q);
 
 printf("Size  of queue is : %d and rear is :%d\n",Q->size,Q->rear);
  
 Dequeue(Q);
 printf("Size  of queue is : %d and front is : %d\n",Q->size,Q->front);
  
 return 0;
}


