//小学生四则运算（上传单个文件）
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Compute(int a,int b,int op);
void Print(int flag);
int main()
{
    int a,b,t,op,count=0,flag,sum1=0,sum2=0;
    char c,d;
    srand(time(NULL));
    for(count=0;count<10;count++)
    {
        a=rand()%10+1;
        b=rand()%10+1;
        op=rand()%4+1;
        switch(op)
        {
            case 1:
                c='+';
                break;
            case 2:
                c='-';
                break;
            case 3:
                c='*';
                break;
            case 4:
                c='/';
        }
        if(a<b&&op==2)
        {
            t=a;
            a=b;
            b=t;
        }
        if(a%b!=0&&op==4)
        {
            count=count-1;
            continue;
        }
        flag=Compute(a,b,op);
        Print(flag);
        if(flag==1)
        {
            flag=1;
            sum1=sum1+flag*10;
        }
        else
        {
            sum2++;
        }
    }
    printf("%d,%d",sum1,sum2);
    return 0;
}
int Compute(int a,int b,int op)
{
    int t;
    int d,e;
    char c;
    switch(op)
    {
        case 1:
            c='+';
            d=a+b;
            break;
        case 2:
            c='-';
            d=a-b;
            break;
        case 3:
            c='*';
            d=a*b;
            break;
        case 4:
            c='/';
            d=a/b;
            break;
    }
    printf("%d%c%d=",a,c,b);
    scanf("%d",&e);
    if(d==e)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Print(int flag)
{
    if(flag==1)
    {
        printf("Right!");
    }
    else if(flag==0)
    {
        printf("Not correct!");
    }
}
