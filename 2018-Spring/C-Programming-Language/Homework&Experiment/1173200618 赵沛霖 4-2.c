//统计一行中字符的个数
#include<stdio.h>
int main()
{
    int count=0;
    char ch;
    while((ch=getchar())!='\n')
    {
        count++;
    }
    printf("%d",count);
    return 0;
}
