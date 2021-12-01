//计算两个正整数的最大公约数
#include<stdio.h>
int MaxCommonFactor(int a,int b);
int main()
{
    int m,n;
    scanf("%d,%d",&m,&n);
    printf("%d",MaxCommonFactor(m,n));
    return 0;
}
int MaxCommonFactor(int a,int b)
{
    int x;
    if(a<=0||b<=0)
    {
        return -1;
    }
    while(b!=0)
    {
        x=a%b;
        a=b;
        b=x;
    }
    return a;
}
