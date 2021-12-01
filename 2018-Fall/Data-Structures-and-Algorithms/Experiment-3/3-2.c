#include <stdio.h>
typedef struct{
    int key;
}Node;
void InsertSort(Node r[],int n)
{
    int i,j,k;
    for(i=2;i<=n;i++)
    {
        r[0]=r[i];            // 复制为监视哨
        for(j=i-1;r[0].key<r[j].key;j--);
        {
            for(k=i-1;k>j;k--)
            {
                r[k+1]=r[k];   // 记录后移
            }

        }
        r[j+1]=r[0];           // 插入到正确位置
    }
}
void main()
{
    Node r[10]={1,10,2,9,3,8,4,7,5,6};
    int i,flag;
    int dt[3]={2,1};
    printf("排序前,数组为：");
    for(i=0;i<10;i++)
    {
        printf("%d ",r[i].key);
    }
    printf("\n\n");
    printf("\n 直接插入排序结果:");
    InsertSort(r-1,10);
    for(i=0;i<10;i++)
        {
            printf("%d ",r[i].key);
        }
}


