#include <stdio.h>
//�ȶ���һ���ṹ��struct Node
struct Node
{
    int data;          //data����������
    struct Node* next; //ָ��ָ����һ���ڵ�
};
//����һ����ͷ���ĵ�����
int main()
{
    int len,i,data;
    struct Node* L=(struct Node*)malloc(sizeof(struct Node));//����洢�ռ�
    if(L==NULL)
    {
        printf("Error!");
        exit(-1);
    }
    //ͷ��㲻��Ϊ��
    L->next=NULL;
    printf("���������������ֵĸ���");
    scanf("%d",&len);
    //���뵥������
    for(i=0;i<len;++i)
    {
        printf("�������%d������ֵ��",i+1);
        scanf("%d",&data);
        //�������뵥�����еĸ���Ԫ��
        struct Node* p=(struct Node*)malloc(sizeof(struct Node));
        if(p==NULL)
        {
            printf("Error!");
            exit(-1);
        }
        //ͷ��㲻��Ϊ��
        p->data=data;
        p->next=L->next;
        L->next=p;
    }

//����Ϊ��λ�����룬����Ϊ�������
    struct Node* q=L->next;
    while(q!=NULL)
    {
        printf("%d",q->data);
        q=q->next;
    }
    return 0;
}
