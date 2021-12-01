//素数判断（验证是否非法输入）
#include<stdio.h>
int main()
{
    int i,m,flag=1;
    while(flag=1)
    {
        scanf("%d",&m);
        if(m<2)
        {
            printf("Input error!Input m:");
        }
        else
            break;
    }
    for(i=2;i<m;i++)
    {
        if(m%i==0)
        {
            break;
        }
    }
    if(i>=m)
    {
        printf("Yes!");
    }
    else
    {
        printf("No!");
    }
    return 0;
}
