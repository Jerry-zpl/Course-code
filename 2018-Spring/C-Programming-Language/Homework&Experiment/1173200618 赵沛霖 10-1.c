//�밴�����ĺ���ԭ�ͱ�̴�ӡ�������
#include<stdio.h>
void YHTriangle(int a[][15],int n);
void PrintYHTriangle(int a[][15],int n);
int i,j;
int main()
{
    int n;
    int a[15][15];
    scanf("%d",&n);
    YHTriangle(a,n);
    PrintYHTriangle(a,n);
    return 0;
}
//�����������
void YHTriangle(int a[][15],int n)
{
    for(i=0;i<n;i++)
    {
        a[i][0]=a[i][i]=1;
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<i;j++)
        {
           a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
}
//��ӡ�������
void PrintYHTriangle(int a[][15],int n)
{
    YHTriangle(a,n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
