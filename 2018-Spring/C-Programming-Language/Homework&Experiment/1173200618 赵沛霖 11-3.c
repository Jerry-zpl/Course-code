//�밴ָ���ĺ���ԭ�ͱ�д�����ж�������ַ����Ƿ�Ϊ�����ġ�
#include<stdio.h>
#include<string.h>
int Judger( char  a[]);
int main()
{
    char str[100];            //��������
    gets(str);                //��������
    if(Judger(str))           //���ú���
    {
        printf("%s",str);
    }
    else
    {
        printf("No!");
    }
    return 0;
}
int Judger( char  a[])
{
    char *m=a;               //ָ�������ֵ
    char *n=a+strlen(a)-1;
    while(m<=n)
    {
        if(*m!=*n)           //����ָ�벻ͬ
        {
            return 0;
        }
        m++;
        n--;
    }
    return 1;
}
