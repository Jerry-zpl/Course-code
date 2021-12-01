//打印所有的“水仙花数”
#include<stdio.h>
int main()
{
    int i,m,n,q;
    for(i=100;i<1000;i++)
    {
        m=i%10;
        n=i/10%10;
        q=i/100;
        if(i==m*m*m+n*n*n+q*q*q)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
