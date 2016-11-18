#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE;
NODE* add_node(NODE *root, int elem)
{
    NODE *temp=(NODE*) malloc(sizeof(NODE));
    temp->data=elem;
    temp->lchild=NULL;
    temp->rchild=NULL;
    if(root==NULL)
        return temp;
    else
    {
        if(elem>root->data)
            root->rchild=add_node(root->rchild, elem);
        else
            root->lchild=add_node(root->lchild, elem);
    }
}
void postorder(NODE *root)
{
    if(root!=NULL)
    {
        postorder(root->lchild);
        postorder(root->rchild);
        printf("%d", root->data);
    }

}
int main()
{
   printf("Enter Option:\n");
   int elem, ch;
   //NODE *root=NULL;
   /*while(1)
   {
       printf("\n1. Insert\n2. Display\n");
       scanf("%d", &ch);
       if(ch==1)
       {
            printf("Enter elem: ");
            scanf("%d", &elem);
           root=add_node(root, elem);
       }
       if(ch==2)
       {
           postorder(root);
       }

   }*/


}
