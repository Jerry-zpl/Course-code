//�밴�����ĺ���ԭ�ͱ��ʵ���ַ���������
#include <stdio.h>
void Mystrcat(char a[], char b []);
int main()
{
    char a[40], b[40];                //��������
    gets(a);                          //��������
    gets(b);
    Mystrcat(a, b);                   //��������
    puts(a);                          //�������
    return 0;
}
void Mystrcat(char a[], char b [])
{
    while(*a)                         //���Ѱַa
    {
        a++;
    }
    while(*b)                         //��bƴ�ӵ�a
    {
        *(a++)=*(b++);
    }
    *a='\0';                         //��������
}
