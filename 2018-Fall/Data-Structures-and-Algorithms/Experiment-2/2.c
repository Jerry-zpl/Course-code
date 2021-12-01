#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct bitnode
{
    char data;
    struct bitnode *lchild,*rchild;
}bitnode,*bitree;
bitree create_tree() //先序创建
{
    char a;
    bitree root;
    scanf("%c",&a);
    fflush(stdin);
    if(a=='*')return NULL;
    else
    {
        root=(bitnode*)malloc(sizeof(bitnode));
        root->data=a;
        root->lchild=create_tree();
        root->rchild=create_tree();
    }
    return root;
}
void inorder(bitree root)//中序遍历
{
    bitree s[100];
    int top=0;
    while(root||top)
    {
        while(root)
        {
            s[++top]=root;root=root->lchild;
        }
        if(top)
        {
            putchar(s[top]->data);
            root=s[top--]->rchild;
        }
    }
}
int leafcount(bitree root)//计算叶子节点个数
{
    int a;
    if(!root)
    {
        return 0;
    }
    else
    {
        if((!root->lchild)&&(!root->rchild))
        {
            return 1;
        }
        else
        {
            a=leafcount(root->lchild)+leafcount(root->rchild);
            return a;
        }
    }
}
int bitnodeHeight(bitree root)//计算树的高度
{
    int lchild,rchild,a;
    if(!root)
    {
        return (0);
    }
    else
    {
        lchild=bitnodeHeight(root->lchild);
        rchild=bitnodeHeight(root->rchild);
        a=(lchild>rchild)?(lchild+1):(rchild+1);
        return a;
    }
}

void main()
{
    bitree root=NULL;
    root=create_tree();//输入序列为先序遍历序列，*代表空
    inorder(root);
    printf("\n");
    printf("%d\n",leafcount(root));
    printf("%d\n",bitnodeHeight(root));
    printf("\n");
}
//输入先序序列例如ab**c**（每输入一次回车）不能省略*（代表空）
