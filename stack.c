#include <stdio.h>
#include <stdlib.h>

#define MAXELEMENT 10
#define TOS -1

struct stackRecord{
  int capacity;
  int topOfStack;
  int *array;
};
struct stackRecord;
typedef struct stackRecord *stack;

//define different functions for use of stack
int IsEmpty(stack S)
{
 if(S->topOfStack == TOS)
  {
   //printf("Stack is empty");
   return 1;
  }
  return 0;
}

//Stack full
int IsFull(stack S)
{
  //printf("In IsFull..\n");
  /*if(S->topOfStack == S->capacity - 1)
  {
   //printf("Stack is full");
   return 1;
  }
  return 0;*/
  return S->topOfStack == S->capacity - 1 ;
}
//create stack
stack CreateStack()
{
 //printf("in CreateStack..\n");
 stack S ;
 S =  malloc(sizeof(struct stackRecord));
 S->array =  malloc(sizeof(int)*MAXELEMENT);
 if(S == NULL)
  {
  }
 if(S->array == NULL)
  {
   //no mempry
  }

  S->capacity = MAXELEMENT;
  S->topOfStack = TOS;
  return S;
}
//insert elements
void Push(stack S, int x)
{
 //printf("in Push..\n");
 int ret = IsFull(S);
 printf("return value from isfull(s) is :%d\n",ret);
 if(IsFull(S))
  {
   printf("Stack is full\n");
  }
 else
 { 
 
 S->topOfStack =  S->topOfStack + 1;
 S->array[S->topOfStack] = x;

 }
}


//pop
int Pop(stack S)
{
 //printf("in Pop..\n");
 int x =0;
 if(IsEmpty(S))
 {
  printf("Stack is empty");
 }
 else
 {
  S->topOfStack = S->topOfStack - 1;
  x = S->array[S->topOfStack];
  return x;
  }
 return 0;
}

void MakeEmpty(stack S )
        {
            S->topOfStack = TOS;
        }
//test function
int main()
{
 stack S;
 int elements = 10;
 int x = 0;
 int i = 0;
 S = CreateStack();
 //MakeEmpty(S);
 
 for(i =1;i<=12;i++)
 {
  Push(S,i);
  printf("topofstack value is : %d\n",S->topOfStack);
  printf("input element is : %d\n",i);
 }
 for(i =1;i<=10;i++)
 {
  x = Pop(S);
  printf("output element is : %d\n",x);
 }
}

