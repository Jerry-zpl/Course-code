//数组、指针和函数综合训练
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Input(long *pnum,char *pname[],int *pscore);
void Sort(long *pnum,char *pname[],int *pscore,int n);
void Print(long *pnum,char *pname[],int *pscore,int n);
int main()
{
    int pscore[30],n,i;
    long pnum[30];
    char *pname[30];
    for(i=0;i<30;i++)
    {
        pname[i]=(char*)malloc(80);                           //调用动态数组
    }
    n=Input(pnum,pname,pscore);
    Sort(pnum,pname,pscore,n);
    printf("\n");
    Print(pnum,pname,pscore,n);
    for(i=0;i<30;i++)
    {
        free((char*)pname[i]);                                //指针数组归零
    }
    return 0;
}
int Input(long *pnum,char *pname[],int *pscore)
{
    int i,n=0,score;
    long num;
    char name[80];
    while(n<30)
    {
        scanf("%ld%s%d",&num,name,&score);
        if(score<0)
        {
            break;
        }
        pnum[n]=num;
        strncpy(pname[n],name,79);
        pscore[n] = score;
        n++;
    }
    return n;
}
void Sort(long *pnum,char *pname[],int *pscore,int n)
{
    int i,j,st;
    long nt;
    char m[80];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(pscore[j]<pscore[j+1])                                         //判断大小并交换位置
            {
                nt=pnum[j];
                pnum[j]=pnum[j+1];
                pnum[j+1]=nt;
                strcpy(m,pname[j]);
                strcpy(pname[j],pname[j+1]);
                strcpy(pname[j+1],m);
                st=pscore[j];
                pscore[j]=pscore[j+1];
                pscore[j+1]=st;
            }
        }
    }
}
void Print(long *pnum,char *pname[],int *pscore,int n)
{
    int i;
    printf("Pos\tNum\tName\tGrade\n");
    for(i=0;i<n;i++)                                                                //输出结果
    {
        printf("%d\t%ld\t%s\t%d\n",i+1,pnum[i],pname[i],pscore[i]);
    }
}
