#include <stdio.h>
//先定义一个结构体struct Node
struct Node
{
    int data;          //data类型是整型
    struct Node* next; //指针指向下一个节点
};
//建立一个含头结点的单链表
int main()
{
    int len,i,data;
    struct Node* L=(struct Node*)malloc(sizeof(struct Node));//分配存储空间
    if(L==NULL)
    {
        printf("Error!");
        exit(-1);
    }
    //头结点不能为空
    L->next=NULL;
    printf("请输入链表中数字的个数");
    scanf("%d",&len);
    //输入单链表长度
    for(i=0;i<len;++i)
    {
        printf("请输入第%d个结点的值：",i+1);
        scanf("%d",&data);
        //依次输入单链表中的各个元素
        struct Node* p=(struct Node*)malloc(sizeof(struct Node));
        if(p==NULL)
        {
            printf("Error!");
            exit(-1);
        }
        //头结点不能为空
        p->data=data;
        p->next=L->next;
        L->next=p;
    }

//以上为正位序输入，以下为逆置输出
    struct Node* q=L->next;
    while(q!=NULL)
    {
        printf("%d",q->data);
        q=q->next;
    }
    return 0;
}
