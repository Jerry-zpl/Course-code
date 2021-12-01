#include<stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d;
    float x1,x2,f1,f2;
    printf("请输入方程系数 a,b,c,d：");
    scanf("%f,%f,%f,%f",&a,&b,&c,&d);
    loop:printf("请输入变量的初值 x=");
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
        if(f2==0)goto loop;                  //goto就是跳到程序指定的地方，它这里用loop来指代那个循环，所以意思就是程序到这里又回到if判断的地方，来形成一个迭代。
        {
            x1=x2-f1/f2;
        }
    }
    while(fabs(x2-x1)>=1e-6);
    printf("方程的根x=%f\n",x1);
    return 0;
}
