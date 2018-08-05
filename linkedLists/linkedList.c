#include "linkedlist.h"
#include "separateEvenAndOddNodes.c"

int main() {
   struct node* head = NULL;

   head = (struct node*)malloc(sizeof(struct node));
   head->data = 'a';
   head->next = NULL;

   addNewNode(head,'b');
   addNewNode(head,'c');
   addNewNode(head,'d');
   addNewNode(head,'e');
   addNewNode(head,'f');
   printList(head);
   separateEvenAndOdd(head);

   return 0;

}
