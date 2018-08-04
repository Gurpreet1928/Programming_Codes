#include<stdio.h>
#include<stdlib.h>

struct node {
    char data;
    struct node *next;
};

void printList(struct node* curr) {
    printf("printing Linked List\n");

    while(curr != NULL)
    { 
      printf("%c->",curr->data);
      curr = curr->next;
    }
    printf("\n");
}

void addNewNode(struct node* head,char data) {
   //printf("Add new node to Linked List\n");

   struct node* newNode = NULL;
   struct node* last = head;
   newNode = (struct node*)malloc(sizeof(struct node));

   newNode->data = data;
   newNode->next = NULL;
   while(last->next != NULL) {
        last= last->next;
   }

   last->next = newNode;
}


      


