//�����ַ�ָ��ķ�����д�����ж�������ַ����Ƿ�Ϊ�����ġ�
#include<stdio.h>
#include<string.h>
int Judger( char  *p);
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
int Judger(char *p)
{
    char *m=p;               //ָ�������ֵ
    char *n=p+strlen(p)-1;
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
