//��ά����ͺ����ۺϱ����ϰ
#include<stdio.h>
int Input(long num[],int score[][3]);
void Total1(int score[][3],float sum[],float aver[],int n);
void Total2(int score[][3],float sum[],float aver[],int n);
void Total3(long num[],int score[][3],float sum[],float aver[],int n);
void Print(long num[],int score[][3],float sum1[],float aver1[],float sum2[],float aver2[],int n);
int main()
{
    long num[30];
    int score[30][3];
    float sum1[30],aver1[30],sum2[3],aver2[3];
    int n;
    n=Input(num,score);
    Total1(score,sum1,aver1,n);
    Total2(score,sum2,aver2,n);
    Total3(num,score,sum1,aver1,n);
    Print(num,score,sum1,aver1,sum2,aver2,n);
    return 0;
}
int Input(long num[],int score[][3])
{
    int count=0,i,j;
    for(i=0;i<30;i++)                                 //����ÿ��ͬѧѧ�ź�ÿ�ſεĳɼ�
    {
        scanf("%ld",&num[i]);
        if(num[i]<0)
        {
            break;
        }
        for(j=0;j<3;j++)
        {
            scanf("%d ",&score[i][j]);
        }
		count++;
    }
    return count;                                              //����༶ͬѧ����
}
void Total1(int score[][3],float sum[],float aver[],int n)
{
    int i,j;
    for(i=0;i<30;i++)
    {
        sum[i]=0;
        for(j=0;j<3;j++)
        {
            sum[i]=sum[i]+score[i][j];                        //����ÿ��ͬѧ�ܳɼ�
        }
        aver[i]=sum[i]/3;                                     //����ÿ����ƽ���ɼ�
    }
}
void Total2(int score[][3],float sum[],float aver[],int n)
{
    int i,j;
    for(j=0;j<3;j++)
    {
        sum[j]=0;
        for(i=0;i<n;i++)
        {
            sum[j]=sum[j]+score[i][j];                        //����ÿһ���ܳɼ�
        }
        aver[j]=sum[j]/n;                                     //����ÿһ��ƽ���ɼ�
      }
}
void Total3(long num[],int score[][3],float sum[],float aver[],int n)    //�Գɼ�����
{
    int i,j,k,N;
    long NUM;
    int SCORE[3];
    float SUM;
    float AVER;
    for(i=0,N=n-1;i<N;++i)
        for(j=i+1;j<n;++j)
        {
            if(sum[j]>sum[i])
            {
                NUM=num[i];
                for(k=0;k<3;++k)
                {
                    SCORE[k]=score[i][k];
                    SUM=sum[i];
                    AVER=aver[i];
                }
                num[i]=num[j];
                for(k=0;k<3;++k)
                {
                    score[i][k]=score[j][k];
                    sum[i]=sum[j];
                    aver[i]=aver[j];
                }
                num[j]=NUM;
                for(k=0;k<3;++k)
                {
                    score[j][k]=SCORE[k];
                    sum[j]=SUM;
                    aver[j]=AVER;
                }
            }
        }
}
void Print(long num[],int score[][3],float sum1[],float aver1[],float sum2[],float aver2[],int n)          //��Ҫ���ӡ
{
    int i,j;
    printf("Pos\tNumber\tGrad1\tGrad2\tGrad3\tSum1\tAver1\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t%ld\t",i+1,num[i]);
        for (j=0;j<3;j++)
        {
            printf("%d\t", score[i][j]);
        }
        printf("%.0f\t%.0f\n",sum1[i], aver1[i]);
    }
    printf("No\tSum2\tAver2\n");
    for (j=0;j<3;j++)
    {
        printf("%d\t%.0f\t%.0f\n",j+1,sum2[j],aver2[ j ]);
    }
}
