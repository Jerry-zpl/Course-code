//�밴�����ĺ���ԭ�ͣ��ַ�ָ�룩��д��ʵ���ַ�������
#include<stdio.h>
void myStrcpy(char *p,char *q);
int main()
{
    char a[100],b[100];               //��������
    gets(a);                          //��������
    myStrcpy(a, b);                   //���ú���
    puts(b);                          //�������
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
