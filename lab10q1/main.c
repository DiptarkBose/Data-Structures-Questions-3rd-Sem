#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node* lchild;
    struct node* rchild;
}NODE;
NODE* createNode()
{
    int elem;
    printf("\nEnter data (-1 for no data): ");
    scanf("%d", &elem);
    NODE *temp=(NODE*) malloc(sizeof(NODE));
    temp->data=elem;
    if(elem==-1)
        return NULL;
    printf("\nEnter left child of %d:", elem);
    temp->lchild=createNode();
    printf("\nEnter right child of %d:", elem);
    temp->rchild=createNode();
    return temp;

}
void preOrder(NODE *root)
{
    if(root!=NULL)
    {
        printf("%d", root->data);
        preOrder(root->lchild);
        preOrder(root->rchild);
    }
}
int main()
{
    NODE* root;
    root=createNode();
    printf("Preorder Traversal: \n");
    preOrder(root);
}
