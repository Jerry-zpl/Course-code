#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int jia(int a[50][50],int b[50][50]);
int jian(int a[50][50],int b[50][50]);
int cheng(int a[50][50],int b[50][50]);
int main()
{
    int a[50][50],b[50][50],i,j,op,flag=0,sum1=0,sum2=0;
    srand(time(NULL));
    op=rand()%3+1;
    if(op=1)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                a[i][j]=rand()%10+1;
                printf("%4d",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                b[i][j]=rand()%10+1;
                printf("%4d",b[i][j]);
            }
            printf("\n");
        }
        printf("Ïà¼ÓÔËËã");

        flag=jia(a,b);
    }
    else if(op=2)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                a[i][j]=rand()%10+1;
                printf("%4d",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                b[i][j]=rand()%10+1;
                printf("%4d",b[i][j]);
            }
            printf("\n");
        }
            printf("Ïà¼õÔËËã");
            flag=jian(a,b);
    }
    else if(op=3)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                a[i][j]=rand()%10+1;
                printf("%4d",a[i][j]);
            }
            printf("\t");
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                b[i][j]=rand()%10+1;
                printf("%4d",b[i][j]);
            }
            printf("\n");
        }
            printf("Ïà³ËÔËËã");
            flag=cheng(a,b);
    }
    if(flag==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int jia(int a[50][50],int b[50][50])
{
    int i,j,c[50][50],d[50][50];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%4d",&d[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(c[i][j]==d[i][j])
            {
                return 1;
            }
            else if(c[i][j]!=d[i][j])
            {
                return 0;
            }
        }
    }
}
int jian(int a[50][50],int b[50][50])
{
    int i,j,c[50][50],d[50][50];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%4d",&d[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(c[i][j]==d[i][j])
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}
int cheng(int a[50][50],int b[50][50])
{
    int i,j,k,c[50][50],d[50][50];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%4d",&d[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(c[i][j]==d[i][j])
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}
