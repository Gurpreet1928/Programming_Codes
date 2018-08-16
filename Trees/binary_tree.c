#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* new_node(int data) {
  struct node* node = (struct node*)malloc(sizeof(struct node));    
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}

void inOrderTraversal(struct node* node) {
   if(node == NULL)
      return;
   inOrderTraversal(node->left);
   printf("%d->",node->data);
   inOrderTraversal(node->right);
}

//Max depth/height of a tree
int maxDepth(struct node* root) {
    if(root == NULL)
        return 0;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    if (left > right)
        return (1+left);
    else 
        return (1+right);
}

int main() {
   struct node *root = new_node(4);
   root->left = new_node(5);
   root->left->left = new_node(4);
   root->right = new_node(8);
   root->right->right = new_node(9);
   root->right->left = new_node(8);

   inOrderTraversal(root);  
   printf("\n");
   printf("Max Depth of the tree = %d\n",maxDepth(root));
   //pathWithUniqueValues(root); 
   return 0 ;
}  
