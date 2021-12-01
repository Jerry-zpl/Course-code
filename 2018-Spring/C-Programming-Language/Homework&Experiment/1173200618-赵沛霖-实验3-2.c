//бщжЄФЇЗНеѓ
#include<stdio.h>
int main()
{
    int a[5][5],b[5],c[5],i,j,sum,sum1,sum2,m,n;
    for(i=0;i<5;i++)                                                            //输入值
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0,j=0,sum=0;i<5;i++)
    {
        sum=sum+a[i][j];
    }
    for(i=0;i<=4;i++)
    {
        for(j=0,sum1=0,sum2=0;j<=4;j++)
        {
            sum1=sum1+a[i][j];
            sum2=sum2+a[j][i];
        }
    }
    if(sum1!=sum||sum2!=sum)
    {
         printf("No");
         return 0;
    }
    for(i=0,j=0,sum1=0,sum2=0;i<=4;i++,j++)
    {
        sum1=sum1+a[i][j];
        sum2=sum2+a[i][4-j];
    }
    if(sum1!=sum||sum!=sum)
    {
        printf("No");
        return 0;
    }
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
