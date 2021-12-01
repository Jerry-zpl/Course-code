//交换最大值&最小值
#include<stdio.h>
void fun(int a[],int n);
int main()
{
    int a[30],n,k,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,n);
    for(k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
    return 0;
}
void fun(int a[],int n)
{

    int j,p,q,maxNum,minNum;
    maxNum=a[0];
    minNum=a[0];
    p=0;
    q=0;
    for(j=1;j<n;j++)
    {
        //判断最大值
        if(a[j]>maxNum)
        {
            maxNum=a[j];
            p=j;
        }
    //判断最小值
        if(a[j]<minNum)
        {
            minNum=a[j];
            q=j;
        }
    }
    //最大最小值交换
    a[q]=maxNum;
    a[p]=minNum;
}

