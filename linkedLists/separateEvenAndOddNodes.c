

void separateEvenAndOdd(struct node* head){
  /*a->b->c->d->e->null
   1  2  3  4  5
   a->c->e->b->d->null output
   odd nodes to the front, even nodes to the end while preseving relative order  */

   struct node* odd = head;
   struct node* even = head->next;
   struct node* evenH = even;

   if(odd == NULL)
       return;

   printf("%c\n",odd->data);
   printf("%c\n",even->data);

   while(odd != NULL || even != NULL) {
       odd->next = even->next;
       if ( odd->next == NULL) {
           printf("exiting now\n");
           break ;
       }
       odd = odd->next;
       printf("%c\n",odd->data);

       even->next  = odd->next;
       if ( even->next == NULL) {
           printf("exiting now\n");
           break ;
       }
       even = even->next;
       printf("%c\n",even->data);
   }

   odd->next = evenH;
   printf("printing sep odd and even\n");
   printList(head);
}
