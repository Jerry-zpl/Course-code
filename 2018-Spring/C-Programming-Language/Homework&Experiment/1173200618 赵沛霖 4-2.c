//ͳ��һ�����ַ��ĸ���
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
