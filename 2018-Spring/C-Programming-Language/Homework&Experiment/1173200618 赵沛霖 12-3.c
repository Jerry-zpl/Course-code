//请按给定的函数原型（字符指针）编写程实现字符串拷贝
#include<stdio.h>
void myStrcpy(char *p,char *q);
int main()
{
    char a[100],b[100];               //定义数组
    gets(a);                          //输入数组
    myStrcpy(a, b);                   //调用函数
    puts(b);                          //输出函数
}
void myStrcpy(char *p,char *q)
{
    int i=0;
    while(p[i]!='\0')
    {
        q[i]=p[i];
        i++;
    }
    q[i]='\0';
}
