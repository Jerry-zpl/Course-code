//验证哥德巴赫猜想
#include<stdio.h>
#include<math.h>
int main()
{
    int a,p,q,i1,i2,flag1,flag2;
    scanf("%d",&a);
    if(a%2==0&&a>0)
    {
        for(p=2;p<a;p=p+1)
        {
            q=a-p;
            //判断p
            flag1=1;
            for(i1=2;i1<=sqrt(p)&&flag1;i1++)
            {
                if(p%i1==0)
                {
                    flag1=0;
                }
            }
            //判断q
            flag2=1;
            for(i2=2;i2<=sqrt(q)&&flag2;i2++)
            {
                if(q%i2==0)
                {
                    flag2=0;
                }
            }
            if(flag1&&flag2)
            {
            printf("%d = %d + %d",a,p,q);
            break;
            }
        }
    }
    else
    {
        printf("Input error!");
    }
    return 0;
}
