//编程打印1000以内的所有完数
#include<stdio.h>
int fun1(int m);
void fun2(int m, int flag);
int main()
{
    int m,flag=0;
    for(m=1;m<1000;m++)
    {
        if(flag=fun1(m))
        {
        fun2(m,flag);
        }
    }
    return 0;
}
int fun1(int m)
{
    int n,s=0;
    for(n=1;n<=m/2;n++)
    {
        if(m%n==0)
        {
            s=s+n;
        }
    }
    if(s==m)
    {
        printf("\n%5d\n",m);
        return 1;
    }
    else
    {
        return 0;
    }
}
void fun2(int m, int flag)
{
    int i;
    for(i=1;i<=m/2;i++)
    {
        if(m%i==0)
        {
            printf("%5d",i);
        }
    }
}
