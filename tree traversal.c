*TREE INSERTION AND TRAVERSALS*


#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data)
{
	struct node* node= (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
void printPreorder(struct node* node)
{
    if (node == NULL)
        return;

    printf("%d ", node->data);
    printPreorder(node->left);
    printPreorder(node->right);
    
}
void printInorder(struct node* node)
{
    if (node == NULL)
        return;
        
    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
    
}
void printPostorder(struct node* node)
{
    if (node == NULL)
        return;
 
    printPostorder(node->left);
    printPostorder(node->right);
    printf("%d ", node->data);

}
int main()
{
	struct node* root = newNode(4);
	root->left = newNode(2);
	root->left->right = newNode(3);
	root->left->left = newNode(1);
	
	
	root->right = newNode(6);
	root->right->left = newNode(5);
	root->right->right = newNode(7);

    printPreorder(root);
	printInorder(root);
	printPostorder(root);
	
	return 0;
}
