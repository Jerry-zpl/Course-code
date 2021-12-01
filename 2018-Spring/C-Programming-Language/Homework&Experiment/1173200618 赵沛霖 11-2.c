//请按给定的函数原型编程实现字符串的连接
#include <stdio.h>
void Mystrcat(char a[], char b []);
int main()
{
    char a[40], b[40];                //定义数组
    gets(a);                          //输入数组
    gets(b);
    Mystrcat(a, b);                   //函数计算
    puts(a);                          //输出函数
    return 0;
}
void Mystrcat(char a[], char b [])
{
    while(*a)                         //间接寻址a
    {
        a++;
    }
    while(*b)                         //将b拼接到a
    {
        *(a++)=*(b++);
    }
    *a='\0';                         //结束数组
}
