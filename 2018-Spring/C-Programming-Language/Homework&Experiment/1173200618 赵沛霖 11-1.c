//请按给定的函数原型编写程序求字符串的逆序
#include<stdio.h>
void inverse(char str[]);
int main()
{
    char a[80];                         //定义数组
    gets(a);                            //输入数组
    inverse(a);                         //函数运算
    printf("%s",a);                     //输出新数组
    return 0;
}
void inverse(char str[])
{
    int i,m=0,n;
    for(i=0;str[i]!='\0';i++)           //判断字符长度
    {
        m++;
    }
    n=m/2;
    char l;
    for (i=0;i<n;i++)                    //交换
    {
        l=str[m-1-i];
        str[m-1-i]=str[i];
        str[i]=l;
    }
}
