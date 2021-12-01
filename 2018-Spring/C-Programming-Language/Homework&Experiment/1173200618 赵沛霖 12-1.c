//请用字符指针的方法编写程序判断输入的字符串是否为“回文”
#include<stdio.h>
#include<string.h>
int Judger( char  *p);
int main()
{
    char str[100];            //定义数组
    gets(str);                //输入数组
    if(Judger(str))           //调用函数
    {
        printf("%s",str);
    }
    else
    {
        printf("No!");
    }
    return 0;
}
int Judger(char *p)
{
    char *m=p;               //指针变量赋值
    char *n=p+strlen(p)-1;
    while(m<=n)
    {
        if(*m!=*n)           //两个指针不同
        {
            return 0;
        }
        m++;
        n--;
    }
    return 1;
}
