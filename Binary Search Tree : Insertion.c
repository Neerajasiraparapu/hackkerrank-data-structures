#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

void preOrder( struct node *root) {
  
	if( root == NULL ) 
      return;
	printf("%d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
  
}

/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/
struct node* insert( struct node* root, int data ) {
		struct node *ptr,*nodeptr,*parentptr;
        ptr=(struct node*)malloc(sizeof(struct node));
	    ptr->data=data;
        ptr->left=NULL;
        ptr->right=NULL;
        if(root==NULL){
            root=ptr;
            root->left=NULL;
            root->right=NULL;
        }
        else{
            parentptr=NULL;
            nodeptr=root;
            while(nodeptr!=NULL)
            {
                parentptr=nodeptr;
                if(data<nodeptr->data)
                    nodeptr=nodeptr->left;
                else
                    nodeptr=nodeptr->right;    
            }
            if(data<parentptr->data)
                parentptr->left=ptr;
            else 
                parentptr->right=ptr;    
        }
        return root;
}
int main() {
  
    struct node* root = NULL;
    
    int t;
    int data;

    scanf("%d", &t);

    while(t-- > 0) {
        scanf("%d", &data);
        root = insert(root, data);
    }
  
	preOrder(root);
    return 0;
}

