//��ɵ������������ֵ����Сֵ��λ��
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
        //�ж����ֵ
        if(a[i]>maxNum)
        {
            maxNum=a[i];
            p=i;
        }
    //�ж���Сֵ
        if(a[i]<minNum)
        {
            minNum=a[i];
            q=i;
        }
    }
    //�����Сֵ����
    a[q]=maxNum;
    a[p]=minNum;
    for(k=0;k<10;k++)
    {
        printf("%d ",a[k]);
    }
    return 0;
}
