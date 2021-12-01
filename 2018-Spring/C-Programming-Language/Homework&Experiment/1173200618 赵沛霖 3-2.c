//将天数转化为周数和天数
#include<stdio.h>
int main()
{
    int d,w,d2;
    scanf("%d",&d);
    w=d/7;
    d2=d%7;
    printf("%d days are %d weeks,%d days.",d,w,d2);
    return 0;
}
