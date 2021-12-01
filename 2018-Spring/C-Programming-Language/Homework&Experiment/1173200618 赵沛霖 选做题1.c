//将一个数按逆序打印输出
#include<stdio.h>
int main()
{
    int m,n=0;
    printf("Please enter a 2 digit number:");
    scanf("%d",&m);
    while(m)
    {
        n*=10;
        n+=m%10;
        m/=10;
    }
    printf("Inverse number this number is:%d",n);
    return 0;
}
