//变成调换数组中最大值及最小值的位置
#include<stdio.h>
int main()
{
    int a[10],p,q,i,j,k,s,maxNum,minNum;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    maxNum=a[0];
    minNum=a[0];
    p=0;
    q=0;
    for(i=1;i<10;i++)
    {
        //判断最大值
        if(a[i]>maxNum)
        {
            maxNum=a[i];
            p=i;
        }
    //判断最小值
        if(a[i]<minNum)
        {
            minNum=a[i];
            q=i;
        }
    }
    //最大最小值交换
    a[q]=maxNum;
    a[p]=minNum;
    for(k=0;k<10;k++)
    {
        printf("%d ",a[k]);
    }
    return 0;
}
