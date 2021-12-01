//编程计算：a+aa+aaa+...+aa...a(n个a)的值
#include<stdio.h>
int main()
{
    int a,n,i,sum=0,b=0;
    scanf("%d,%d",&a,&n);
    for(i=1;i<=n;i=i+1)
    {
        b=a+b;
        a=a*10;
        sum=sum+b;
    }
    printf("sum=%d",sum);
    return 0;
}
