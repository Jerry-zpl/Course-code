//±‡≥Ãº∆À„
#include<stdio.h>
int main()
{
    int i=1,m=0;
    for(i=1;i<=99;i=i+2)
    {
        m=m+i*(i+1)*(i+2);
    }
    printf("sum=%d",m);
    return 0;
}
