#include<stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d;
    float x1,x2,f1,f2;
    printf("�����뷽��ϵ�� a,b,c,d��");
    scanf("%f,%f,%f,%f",&a,&b,&c,&d);
    loop:printf("����������ĳ�ֵ x=");
    scanf("%f",&x1);
    do
    {
        x2=x1;
        f1=a*x2*x2*x2+b*x2*x2+c*x2+d;
        if(f1==0)
        {
            break;
        }
        f2=3*a*x2*x2+2*b*x2+c;
        if(f2==0)goto loop;                  //goto������������ָ���ĵط�����������loop��ָ���Ǹ�ѭ����������˼���ǳ��������ֻص�if�жϵĵط������γ�һ��������
        {
            x1=x2-f1/f2;
        }
    }
    while(fabs(x2-x1)>=1e-6);
    printf("���̵ĸ�x=%f\n",x1);
    return 0;
}
