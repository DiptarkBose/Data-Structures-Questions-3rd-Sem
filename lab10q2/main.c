#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;

}NODE;
NODE* newNode(int elem)
{
    NODE *temp=(NODE*) malloc(sizeof(NODE));
    temp->data=elem;
    temp->lchild=NULL;
    temp->rchild=NULL;
    return temp;
}

NODE* insert(NODE *root, int elem)
{
    if(root==NULL)
        return newNode(elem);
    if(elem>root->data)
        root->rchild=insert(root->rchild, elem);
    else
        root->lchild=insert(root->lchild, elem);
    return root;
}
void preorder(NODE *root)
{
    if(root!=NULL)
    {
        printf("%d", root->data);
        preorder(root->lchild);
        preorder(root->rchild);
    }
}
int main()
{
    NODE* root;
    root=insert(root, 14);
    root=insert(root, 15);
    root=insert(root, 23);
    root=insert(root, 67);
    root=insert(root, 89);
    preorder(root);
}
