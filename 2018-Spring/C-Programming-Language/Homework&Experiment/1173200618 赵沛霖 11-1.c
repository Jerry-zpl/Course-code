//�밴�����ĺ���ԭ�ͱ�д�������ַ���������
#include<stdio.h>
void inverse(char str[]);
int main()
{
    char a[80];                         //��������
    gets(a);                            //��������
    inverse(a);                         //��������
    printf("%s",a);                     //���������
    return 0;
}
void inverse(char str[])
{
    int i,m=0,n;
    for(i=0;str[i]!='\0';i++)           //�ж��ַ�����
    {
        m++;
    }
    n=m/2;
    char l;
    for (i=0;i<n;i++)                    //����
    {
        l=str[m-1-i];
        str[m-1-i]=str[i];
        str[i]=l;
    }
}
