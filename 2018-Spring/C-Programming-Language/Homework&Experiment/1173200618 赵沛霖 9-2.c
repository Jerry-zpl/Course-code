//��̴�ӡ�������
#include<stdio.h>
int main()
{
    int a[10][10],i,j;
    for(i=0;i<10;i++)     //��
    {
        for(j=0;j<i+1;j++)    //��
        {
            if(i==j||j==0)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
            printf("%d ",a[i][j]);
            if(i==j)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
