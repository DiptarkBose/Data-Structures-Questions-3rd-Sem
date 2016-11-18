#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE;
void inorder(NODE *root)
{
    inorder(root->lchild);
    if(root->data==key)
    {
        break;
    }
    inorder(root->rchild);
}
