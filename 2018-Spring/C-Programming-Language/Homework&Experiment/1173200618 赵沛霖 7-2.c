//爱因斯坦数学问题
#include<stdio.h>
int main()
{
    int n=7;
    for(n;;++n)
    {
        if(n%2==1&&n%3==2&&n%5==4&&n%6==5&&n%7==0)
        {
            printf("%d",n);
            break;
        }
    }
    return 0;
}
